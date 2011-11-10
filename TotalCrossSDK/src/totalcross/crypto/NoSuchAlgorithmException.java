/*********************************************************************************
 *  TotalCross Software Development Kit                                          *
 *  Copyright (C) 2000-2011 SuperWaba Ltda.                                      *
 *  All Rights Reserved                                                          *
 *                                                                               *
 *  This library and virtual machine is distributed in the hope that it will     *
 *  be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of    *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                         *
 *                                                                               *
 *********************************************************************************/

package totalcross.crypto;

/**
 * This exception is thrown when a particular cryptographic algorithm is requested but is not available in the
 * environment.
 */

public class NoSuchAlgorithmException extends CryptoException
{
   /**
    * Constructs a NoSuchAlgorithmException with no detail message. A detail message is a String that describes this
    * particular exception.
    */
   public NoSuchAlgorithmException()
   {}

   /**
    * Constructs a NoSuchAlgorithmException with the specified detail message. A detail message is a String that
    * describes this particular exception, which may, for example, specify which algorithm is not available.
    */
   public NoSuchAlgorithmException(String msg)
   {
      super(msg);
   }
}
