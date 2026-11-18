#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_00111F1C(int param_1,int *param_2,undefined4 *param_3,int param_4,int param_5,int param_6, uint param_7);
extern uint *DAT_00111c44;
extern undefined4 DAT_00111c48;
extern undefined4 DAT_00111c4c;
extern undefined4 *DAT_00111c50;
extern undefined4 *DAT_00111c54;

// USA 00111AA0 <- EU 00111AA0 (Ghidra, non-matching)
// GLOBAL DAT_00111c44 uint *
// GLOBAL DAT_00111c48 undefined4
// GLOBAL DAT_00111c4c undefined4
// GLOBAL DAT_00111c50 undefined4 *
// GLOBAL DAT_00111c54 undefined4 *

void func_00111AA0(int param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define auStack_70 ((undefined4 *)(albw_frame + 0x0))
  #define local_64 (*(undefined4 *)(albw_frame + 0xc))
  #define local_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_44 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_40 (*(int *)(albw_frame + 0x30))
  #define local_3c (*(undefined4 *)(albw_frame + 0x34))
  #define piStack_38 (*(int * *)(albw_frame + 0x38))
  #define local_34 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_30 (*(int *)(albw_frame + 0x40))
  #define iStack_2c (*(int *)(albw_frame + 0x44))
  iVar7 = *(int *)(*(int *)(param_1 + 0x18) + 8);
  iVar11 = *(int *)(iVar7 + 0x20);
  piVar9 = *(int **)(iVar7 + 0x38);
  if (piVar9 != (int *)0x0) {
    piVar6 = *(int **)(*(int *)(*(int *)(param_1 + 0x18) + 0xc) + 0xc);
    local_40 = piVar6[3] + *param_2 * *(int *)(*piVar6 + 0x18) * 4;
    local_3c = *(undefined4 *)(*piVar6 + 0x18);
    local_34 = *(undefined4 *)(param_1 + 0x18);
    local_30 = 0;
    piStack_38 = param_2;
    iStack_2c = param_1;
    iVar7 = (**(code **)(*piVar9 + 4))(piVar9,&local_40);
    if (iVar7 != 0) {
      return;
    }
  }
  uVar10 = (uint)*(byte *)((int)param_2 + 0x33);
  if (uVar10 == 0xff) {
    uVar10 = (uint)*(byte *)(*(int *)(param_1 + 0x18) + 0x34);
  }
  uVar1 = *(ushort *)((int)param_2 + 0x26);
  uVar2 = *(ushort *)(param_2 + 9);
  if (((*DAT_00111c44 & 1) == 0) &&
     (iVar7 = func_00100174((int *)DAT_00111c44), puVar5 = DAT_00111c50, uVar4 = DAT_00111c4c,
     uVar3 = DAT_00111c48, iVar7 != 0)) {
    puVar8 = DAT_00111c50 + 4;
    *DAT_00111c50 = DAT_00111c48;
    puVar5[1] = uVar4;
    puVar5[2] = uVar4;
    puVar5[3] = uVar4;
    *puVar8 = uVar4;
    puVar5[5] = uVar3;
    puVar5[6] = uVar4;
    puVar5[7] = uVar4;
    puVar5[8] = uVar4;
    puVar5[9] = uVar4;
    puVar5[10] = uVar3;
    puVar5[0xb] = uVar4;
  }
  func_001119F4(auStack_70,DAT_00111c50);
  local_64 = *DAT_00111c54;
  local_54 = DAT_00111c54[1];
  local_44 = DAT_00111c54[2];
  func_00111F1C(iVar11,(int *)(param_1 + 0x20),auStack_70,(uint)uVar1,(uint)uVar2,uVar10,0xffffffff)
  ;
  if ((char)param_2[0xc] == '\0') {
    uVar10 = *(uint *)(param_1 + 0x3c) & 0xfffffffe;
  }
  else {
    uVar10 = *(uint *)(param_1 + 0x3c) | 1;
  }
  *(uint *)(param_1 + 0x3c) = uVar10 | 0x30;
  if (piVar9 != (int *)0x0) {
    local_30 = param_1 + 0x20;
    (**(code **)(*piVar9 + 8))(piVar9,&local_40);
  }
  return;
}

