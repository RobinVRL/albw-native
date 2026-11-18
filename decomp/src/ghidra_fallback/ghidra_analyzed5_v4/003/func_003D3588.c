#include "ghidra_types.h"

extern int func_003D32CC(int param_1,int param_2,int param_3);
extern int DAT_003d35c8;
extern int DAT_003d35cc;
extern int DAT_003d35d0;

// USA 003D3588 <- EU 003D3564 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 int
// PARAM param_8 Stack[0xc]:4 int
// GLOBAL DAT_003d35c8 int
// GLOBAL DAT_003d35cc int
// GLOBAL DAT_003d35d0 int

void func_003D3588(longlong *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  int iVar1;
  
  iVar1 = func_003D32CC(param_2,param_3,param_4);
  *param_1 = (longlong)DAT_003d35d0 * (longlong)iVar1 +
             (longlong)DAT_003d35cc * (longlong)param_5 + (longlong)param_8 +
             (longlong)param_7 * 1000 + (longlong)param_6 * (longlong)DAT_003d35c8;
  return;
}

