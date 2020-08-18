// Copyright (C) 2000-2013 SuperWaba Ltda.
// Copyright (C) 2014-2020 TotalCross Global Mobile Platform Ltda.
//
// SPDX-License-Identifier: LGPL-2.1-only
package tc.tools.converter.bytecode;

public class BC164_if_icmple extends ConditionalBranch
{
  public BC164_if_icmple() { super(-2, -2, -1, readInt16(pc + 1), INT); }

  @Override public void exec()
  {
    if (stack[stackPtr - 2].asInt <= stack[stackPtr - 1].asInt) {
      pcInc = jumpIfTrue;
    } else {
      pcInc = jumpIfFalse;
    }
  }
}
