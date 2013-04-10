package totalcross.ui.chart;

import totalcross.ui.*;
import totalcross.ui.gfx.*;

/**
    The ChartData class represents a table with data that would be displayed in the chart.
    Here's a sample:
    <pre>
      double[] xAxis = new double[0];
      double[] pressureyAxis = new double[0]; 
      Series pressureSeries = new Series("Pression", xAxis, pressureyAxis, Color.BLUE);
      int cols = 24, rows = 5;
      XYChart chart = new XYChart();
      chart.showHGrids = chart.showVGrids = true; // Shows grids.
      chart.showTitle = true; // Shows title.
      chart.showYValues = true; // Shows the Y axis values.
      chart.yDecimalPlaces = 0; // No decimal places.
      chart.setXAxis(0, 240, 24); // The X axis is time in minutes. It has an interval of 5 minutes and a maximum of 2 hours.
      chart.setYAxis(0, 240, 24); // The Y axis is different for each graph.

      chart.snapToTop = chart.snapToBottom = true;
      String[][] data = new String[rows][cols];
      String[] tit = new String[rows];
      for (int r = 0; r < rows; r++)
      {
         tit[r] = "row "+(r+1);
         for (int c = 0; c < cols; c++)
            data[r][c] = "999";
      }

      ChartData cd1 = new ChartData(chart, tit, data);
      cd1.lineColor = Color.BLACK;
      cd1.setFont(font.adjustedBy(-2));
      cd1.snapToTop = true;

      ChartData cd2 = new ChartData(chart, data);
      cd2.lineColor = Color.BLACK;
      cd2.setFont(font.adjustedBy(-2));
      cd2.snapToBottom = true;
      
      add(cd1,LEFT,TOP+25,FILL,PREFERRED);
      add(cd2,LEFT,BOTTOM-25,FILL,PREFERRED);
      add(chart,LEFT,AFTER,FILL,FIT,cd1);
      cd2.bringToFront();
      cd1.bringToFront();
      chart.showLines = false;
      chart.yValuesSize = fm.stringWidth("99999");
      chart.series.addElement(pressureSeries);
      // setup the xy chart
      pressureSeries.xValues = new double[]{10,20,30,40,50};
      pressureSeries.yValues = new double[]{10,20,30,40,35};
      try
      {
         pressureSeries.dot = Resources.radioBkg.getNormalInstance(fmH,fmH,-1);
      }
      catch (ImageException e)
      {
         MessageBox.showException(e, true);
      }
      cd2.reposition();
    </pre>
    
    @since TotalCross 2.0
 */

public class ChartData extends Container
{
   public int decimalPlaces;
   String[][] data;
   String[] title;
   Chart chart;
   public int lineColor = Color.DARK;
   public int fillColor2 = 0xDDDDDD;
   public int titleForeColor=-1, titleBackColor=-1;
   
   public boolean snapToTop;
   public boolean snapToBottom;

   /** Constructs a ChartData without title. 
    * @param data The values to be displayed in the format [rows][cols] 
    */
   public ChartData(Chart chart, String[][] data)
   {
      this(chart, null, data);
   }
   
   /** Constructs a ChartData with the given title and data.
    * @param data The values to be displayed in the format [rows][cols] 
    */
   public ChartData(Chart chart, String[] title, String[][] data)
   {
      this.chart = chart;
      this.title = title;
      this.data = data;
   }
   
   public void onPaint(Graphics g)
   {
      g.backColor = backColor;
      if (!transparentBackground)
         g.fillRect(0,0,width,height);
      double inc = (chart.xAxisMaxValue - chart.xAxisMinValue) / chart.xAxisSteps;
      double val = chart.xAxisMinValue;
      if (chart.getXValuePos(val) == 0) return;
      int v0 = chart.getXValuePos(val),xx;
      int cw = chart.getXValuePos(val+inc) - v0;
      int ystep = this.height / data.length;
      int yxtra = this.height % ystep;

      if (fillColor2 != -1)
      {
         double x0 = val;
         g.backColor = fillColor2;
         x0 += inc;
         for (int j = 1, n = data[0].length; j <= n; j+=2, x0 += inc*2) // vertical lines
            g.fillRect(xx = chart.getXValuePos(x0),0,chart.getXValuePos(x0+inc)-xx,height);
      }
      
      int xx0 = chart.getXValuePos(val);
      if (titleBackColor != -1)
      {
         g.backColor = titleBackColor;
         g.fillRect(0,0,xx0+1,height);
      }

      g.backColor = backColor;
      g.foreColor = foreColor;
      int yy = 0;
      for (int i = 0; i < data.length; i++)
      {
         double x0 = val;
         int hh = ystep;
         if (i < yxtra) hh++;
         if (title != null)
         {
            g.setClip(0,yy,chart.getXValuePos(x0)-2,hh);
            g.foreColor = titleForeColor != -1 ? titleForeColor : foreColor;
            g.drawText(title[i],0,yy+(hh-fmH)/2);
         }         
         g.foreColor = foreColor;
         for (int j = 0, n = data[i].length; j < n; j++, x0 += inc)
         {
            xx = chart.getXValuePos(x0);
            g.setClip(xx,yy,cw,hh-1);
            String d = data[i][j];
            int sw = fm.stringWidth(d);
            g.drawText(d,xx+(cw-sw)/2,yy+(hh-fmH)/2);
         }
         yy += hh;
      }
      if (lineColor != -1)
      {
         g.clearClip();
         g.backColor = lineColor;
         g.foreColor = backColor;
         int xf = chart.getXValuePos(val + inc * data[0].length);
         double x0 = val+(fillColor2 != -1 ? inc : 0);
         for (int j = fillColor2 != -1 ? 1 : 0, n = data[0].length; j <= n; j++, x0 += inc) // vertical lines
            g.drawDots(xx = chart.getXValuePos(x0),0,xx,height);
         yy = 0;
         int hh = 0;
         if (fillColor2 != -1)
            v0++;
         for (int i = snapToBottom ? 1 : 0, n = data.length; i <= n; i++,yy += hh) // horizontal lines
         {
            g.drawDots(v0,yy,xf,yy);
            hh = ystep;
            if (i < yxtra) hh++;
         }
         if (!snapToTop)
            g.drawDots(v0,height-1,xf,height-1);
      }
      if (chart.markPos != Chart.UNSET)
      {
         g.foreColor = chart.categoryMarkColor;
         g.drawLine(chart.markPos-1,0,chart.markPos-1,height);
         g.drawLine(chart.markPos,0,chart.markPos,height);
         g.drawLine(chart.markPos+1,0,chart.markPos+1,height);
      }
   }
   
   public void reposition()
   {
      removeAll();
      initUI();
   }
   
   public int getPreferredHeight()
   {
      return fmH * data.length;
   }
}
