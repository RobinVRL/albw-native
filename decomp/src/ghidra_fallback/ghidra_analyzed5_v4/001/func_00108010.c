#include "ghidra_types.h"

extern int func_001020C4(uint param_1);
extern int func_001020F0(uint *param_1,undefined4 param_2);
extern int func_00102120(void *param_1);
extern int func_00103CBC(char *param_1);
extern int func_00104800(void);
extern int func_00104868(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4);
extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern int func_0010D11C(void);
extern int *DAT_001080bc;
extern uint DAT_001080c0;
extern char *DAT_001080c4;
extern int DAT_001080c8;

// USA 00108010 <- EU 00108010 (Ghidra, non-matching)
// GLOBAL DAT_001080bc int *
// GLOBAL DAT_001080c0 uint
// GLOBAL DAT_001080c4 char *
// GLOBAL DAT_001080c8 int

undefined4 func_00108010(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(uint *)(albw_frame + 0x0))
  if (*DAT_001080bc != 0) {
    return 0;
  }
  uVar1 = func_00104800();
  if ((uVar1 != DAT_001080c0) && ((int)uVar1 < 0)) {
    func_0010AC24(uVar1,0x10803c);
  }
  iVar2 = func_00103CBC(DAT_001080c4);
  iVar2 = func_00104868(DAT_001080bc,(undefined4 *)DAT_001080c4,iVar2,0);
  if (iVar2 < 0) {
    func_0010AC24(iVar2,0x108064);
  }
  func_001020C4(*(uint *)(DAT_001080c8 + 4));
  piVar3 = (int *)(DAT_001080c8 + 8);
  *piVar3 = DAT_001080c8;
  func_00102120(piVar3);
  local_10 = func_0010D11C();
  uVar1 = func_001020F0(&local_10,0);
  if ((int)uVar1 < 0) {
    return func_0010AC24(uVar1,0x1080ac);
  }
  return 0;
}

