#include "ghidra_types.h"

extern undefined8 func_00259354(int param_1,int *param_2,int param_3);
extern int func_00297298(int param_1,int param_2);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_00539000(int param_1,int *param_2);
extern int func_00540980(int param_1);
extern int func_00540A70(int param_1,int *param_2);
extern int DAT_003218d0;
extern int *DAT_003218d4;
extern int DAT_003218d8;

// USA 0032181C <- EU 003217F8 (Ghidra, non-matching)
// GLOBAL DAT_003218d0 int
// GLOBAL DAT_003218d4 int *
// GLOBAL DAT_003218d8 int

int func_0032181C(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(undefined1 * *)(albw_frame + 0xc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c ((undefined1 *)(albw_frame + 0x14))
  #define uStack_d (*(undefined1 *)(albw_frame + 0x53))
  piVar1 = DAT_003218d4;
  if (0xc < param_2) {
    return param_1;
  }
  local_54 = local_4c;
  uStack_50 = 0x40;
  uStack_d = 0;
  local_4c[0] = 0;
  local_58 = DAT_003218d0;
  if (param_2 == 0) {
    iVar2 = func_00539000(*DAT_003218d4,&local_58);
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    func_004994B0((int)&local_58,*(undefined4 *)(DAT_003218d8 + param_2 * 0xc),0x40,param_4);
  }
  iVar2 = func_00540A70(*piVar1,&local_58);
  if (iVar2 == 0) {
    iVar2 = func_00540980(*piVar1);
    iVar3 = DAT_003218d8 + param_2 * 0xc;
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar3 + 4), -1 < iVar2)) {
      func_00297298(*piVar1,iVar2);
    }
    uVar4 = func_00259354(*piVar1,&local_58,*(int *)(iVar3 + 8));
    iVar2 = (int)uVar4;
  }
  return iVar2;
}

