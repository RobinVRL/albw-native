#include "ghidra_types.h"

extern int func_00100024(void);
extern int func_00100924(void);
extern int func_00100B88(void);
extern int func_00100B90(void);
extern int func_00100BC4(void);
extern int func_00100C18(void);
extern int func_00100C90(undefined4 param_1);
extern int func_00100D84(undefined4 param_1,undefined4 param_2);
extern int func_00100E60(void);

// USA 00100000 <- EU 00100000 (Ghidra, non-matching)

undefined4 func_00100000(void)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  
  func_00100024();
  uVar1 = func_00100BC4();
  func_00100D84(uVar1,extraout_r1);
  func_00100E60();
  func_00100924();
  func_00100B90();
  uVar1 = func_00100C18();
  func_00100C90(uVar1);
  return func_00100B88();
}

