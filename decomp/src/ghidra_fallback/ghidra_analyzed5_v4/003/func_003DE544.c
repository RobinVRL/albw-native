#include "ghidra_types.h"

extern int func_00103C68(undefined4 *param_1,undefined4 param_2);
extern int func_0010A98C(uint param_1);
extern int func_0010AA9C(void);
extern int func_0010DEB0(undefined4 *param_1);
extern int func_003D2AC0(undefined2 param_1);
extern int func_003D2AEC(undefined4 *param_1);
extern int func_003D2B18(int param_1,int param_2,int param_3);
extern int func_003DC2E4(void);
extern int func_003DC648(int param_1);
extern int func_003DD93C(void);
extern int func_003DD948(int param_1);
extern int func_003DDE84(int param_1);
extern int func_003DF02C(uint *param_1,int param_2);
extern uint DAT_003de690;
extern int DAT_003de694;
extern uint DAT_003de698;
extern int DAT_003de69c;
extern int DAT_003de6a0;
extern int DAT_003de6a4;

// USA 003DE544 <- EU 003DE524 (Ghidra, non-matching)
// GLOBAL DAT_003de690 uint
// GLOBAL DAT_003de694 int
// GLOBAL DAT_003de698 uint
// GLOBAL DAT_003de69c int
// GLOBAL DAT_003de6a0 int
// GLOBAL DAT_003de6a4 int

uint func_003DE544(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((uint *)(albw_frame + 0x8))
  #define local_20 ((uint *)(albw_frame + 0x10))
  iVar1 = func_0010AA9C();
  if (iVar1 == 0) {
    return DAT_003de690;
  }
  if (*(char *)(DAT_003de694 + (int)param_1) == '\0') {
    local_28[0] = 0;
    uVar2 = DAT_003de698;
    if ((*param_1 == 0) && (uVar2 = func_00103C68(local_28,1), -1 < (int)uVar2)) {
      *param_1 = local_28[0];
      uVar2 = 0;
    }
    if ((int)uVar2 < 0) {
      func_0010A98C(uVar2);
    }
    uVar2 = func_003D2B18(*param_1,2,2);
    if ((int)uVar2 < 0) {
      if (*param_1 == 0) {
        return uVar2;
      }
      software_interrupt(0x23);
      *param_1 = 0;
      return uVar2;
    }
    local_20[0] = 0;
    uVar2 = func_003D2AEC(local_20);
    if (((int)uVar2 < 0) || (local_20[0] == 0)) {
      return uVar2;
    }
    param_1[1] = local_20[0];
    func_003D2AC0(0x2000);
    func_0010DEB0(param_1 + 2);
    func_003DF02C(param_1,param_2);
    if (param_2 == 0) {
      *(undefined1 *)(DAT_003de6a4 + (int)param_1) = 1;
      param_1[5] = 0;
    }
    else {
      func_003DC648(DAT_003de69c);
      func_003DDE84(DAT_003de6a0);
      func_003DC2E4();
      iVar1 = func_003DD93C();
      func_003DD948(iVar1);
    }
  }
  return 0;
}

