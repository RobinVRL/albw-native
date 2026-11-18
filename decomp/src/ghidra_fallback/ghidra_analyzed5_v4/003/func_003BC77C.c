#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_003BB8EC(int param_1,int param_2);
extern int func_004CEAF0(int param_1);
extern int func_00539418(undefined4 param_1,int param_2,undefined4 *param_3);
extern int func_0057EAC0(int param_1);
extern undefined4 DAT_003bc860;
extern float DAT_003bc864;
extern float DAT_003bc868;
extern undefined4 DAT_003bc86c;

// USA 003BC77C <- EU 003BC758 (Ghidra, non-matching)
// GLOBAL DAT_003bc860 undefined4
// GLOBAL DAT_003bc864 float
// GLOBAL DAT_003bc868 float
// GLOBAL DAT_003bc86c undefined4

undefined4 func_003BC77C(int param_1,byte *param_2,undefined4 param_3,int *param_4)

{
  byte bVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  bVar1 = *(byte *)(param_1 + 0x1e9);
  iVar3 = *(int *)(param_2 + 4);
  bVar4 = bVar1 == 3;
  if (!bVar4) {
    bVar1 = *param_2;
  }
  if (bVar4 || bVar1 == 2) {
    func_0057EAC0(param_1 + 0x210);
    local_14 = *(float *)(param_1 + 0x1e4) * DAT_003bc864;
    if (DAT_003bc868 <= local_14) {
      local_14 = DAT_003bc868;
    }
    local_20 = DAT_003bc86c;
    local_1c = DAT_003bc86c;
    local_18 = DAT_003bc86c;
    func_00539418(param_1,iVar3,&local_20);
  }
  else if ((0 < *(int *)(param_1 + 0x1d4)) &&
          (*(char *)(*(int *)(param_1 + 0x1ec) + 0x50) == '\x02')) {
    if (bVar1 == 0) {
      func_00169A80(*(int **)(param_1 + 0x1f8),2,param_3,param_4);
      uVar2 = 0;
      func_00168E9C(*(int **)(param_1 + 0x1f8),*(int *)(param_1 + 500),(int *)0x0);
      func_00169A80(*(int **)(param_1 + 0x2f8),extraout_r1,uVar2,param_4);
      func_00168E9C(*(int **)(param_1 + 0x2f8),*(int *)(param_1 + 500),(int *)0x0);
      uVar2 = DAT_003bc860;
      iVar3 = *(int *)(param_1 + 500);
      *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
      *(undefined4 *)(iVar3 + 0x74) = uVar2;
      *(undefined4 *)(iVar3 + 0x78) = uVar2;
      *(undefined4 *)(iVar3 + 0x7c) = uVar2;
      func_004CEAF0(*(int *)(param_1 + 500));
    }
    return func_003BB8EC(param_1,(uint)*param_2);
  }
  return 0;
}

