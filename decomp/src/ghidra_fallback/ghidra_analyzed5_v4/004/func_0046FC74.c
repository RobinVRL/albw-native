#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001B6C04(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00368B1C(int param_1,uint param_2,undefined4 param_3);
extern int func_00368B80(int param_1,uint param_2,undefined4 param_3);
extern int func_0047061C(int param_1,int param_2);
extern int func_0048C028(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_00498514(int param_1,float fparam_0);
extern int func_004B9620();
extern int func_0055696C(int param_1,int param_2);
extern int func_00557608(int param_1);
extern int *DAT_0046ff6c;
extern float DAT_0046ff70;
extern int *DAT_0046ff74;
extern int *DAT_0046ff78;
extern uint *DAT_0046ff7c;
extern undefined4 *DAT_0046ff80;
extern undefined4 DAT_0046ff84;
extern undefined4 *DAT_0046ff88;
extern int DAT_0046ff8c;
extern int DAT_0046ff90;
extern uint *DAT_0046ff94;
extern undefined4 *DAT_0046ff98;
extern undefined4 DAT_0046ff9c;
extern float DAT_0046ffa0;

// USA 0046FC74 <- EU 0046FC4C (Ghidra, non-matching)
// GLOBAL DAT_0046ff6c int *
// GLOBAL DAT_0046ff70 float
// GLOBAL DAT_0046ff74 int *
// GLOBAL DAT_0046ff78 int *
// GLOBAL DAT_0046ff7c uint *
// GLOBAL DAT_0046ff80 undefined4 *
// GLOBAL DAT_0046ff84 undefined4
// GLOBAL DAT_0046ff88 undefined4 *
// GLOBAL DAT_0046ff8c int
// GLOBAL DAT_0046ff90 int
// GLOBAL DAT_0046ff94 uint *
// GLOBAL DAT_0046ff98 undefined4 *
// GLOBAL DAT_0046ff9c undefined4
// GLOBAL DAT_0046ffa0 float

undefined1 * func_0046FC74(int param_1)

{
  byte bVar1;
  byte bVar2;
  float fparam_0;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(int *)(albw_frame + 0x8))
  #define auStack_74 ((undefined4 *)(albw_frame + 0xc))
  #define local_44 (*(int *)(albw_frame + 0x3c))
  #define local_40 (*(int *)(albw_frame + 0x40))
  #define local_3c (*(int *)(albw_frame + 0x44))
  #define local_38 (*(int *)(albw_frame + 0x48))
  #define local_34 (*(int *)(albw_frame + 0x4c))
  #define local_30 (*(int *)(albw_frame + 0x50))
  #define local_2c (*(int *)(albw_frame + 0x54))
  #define local_28 (*(int *)(albw_frame + 0x58))
  #define local_24 (*(int *)(albw_frame + 0x5c))
  func_001B6C04(param_1);
  fparam_0 = DAT_0046ff70;
  *(undefined1 *)(*DAT_0046ff6c + 0x1438) = 1;
  func_002317C0((undefined2 *)(param_1 + 0x9c),fparam_0);
  piVar8 = DAT_0046ff74;
  *(undefined1 *)(param_1 + 0xed) = 0;
  if (*piVar8 != 0) {
    iVar3 = func_0055696C(*piVar8,0x27);
    *(bool *)(param_1 + 0xed) = iVar3 != 0;
  }
  func_0047061C(param_1,1);
  *(undefined1 *)(param_1 + 0xec) = 4;
  iVar3 = func_00557608(*(int *)(param_1 + 0xe0));
  if (iVar3 == 0) {
LAB_0046fd5c:
    bVar1 = *(byte *)(param_1 + 0xec);
    iVar3 = *(int *)(param_1 + 0x6c);
    bVar2 = bVar1 >> 6;
    if (bVar2 != 0) {
      bVar1 = bVar1 >> 2;
    }
    *(ushort *)(iVar3 + 8) = bVar1 & 3;
    *(ushort *)(iVar3 + 10) = (ushort)bVar2;
    iVar5 = *(int *)(param_1 + 0x54);
    for (iVar3 = *(int *)(param_1 + 0x4c); iVar3 = iVar3 - iVar5,
        iVar3 != (param_1 + 0x48) - *(int *)(param_1 + 0x54); iVar3 = *(int *)(iVar3 + iVar5 + 4)) {
      *(undefined1 *)(iVar3 + 0xe) = 1;
    }
    func_004B9620(param_1);
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffff7f;
    piVar8 = *(int **)(*DAT_0046ff78 + 0x28d8);
    if (((*DAT_0046ff7c & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0046ff7c), iVar3 != 0)) {
      *DAT_0046ff80 = DAT_0046ff84;
    }
    if ((piVar8 == (int *)0x0) ||
       (iVar3 = (**(code **)(*piVar8 + 8))(piVar8,DAT_0046ff80), iVar3 == 0)) {
      piVar8 = (int *)0x0;
    }
    func_0048C028(&local_78,DAT_0046ff88 + -6,DAT_0046ff88 + -3,DAT_0046ff88);
    (**(code **)(local_78 + 0x10))(&local_78,auStack_74);
    func_001151EC(piVar8 + 5,auStack_74);
    iVar5 = DAT_0046ff90;
    iVar3 = DAT_0046ff8c;
    piVar8[0x11] = local_44;
    piVar8[0x12] = local_40;
    piVar8[0x13] = local_3c;
    piVar8[0x14] = local_38;
    piVar8[0x15] = local_34;
    piVar8[0x16] = local_30;
    piVar8[0x17] = local_2c;
    piVar8[0x18] = local_28;
    piVar8[0x19] = local_24;
    piVar8[0xb2] = piVar8[0xb2] & 0xfffffffe;
    piVar8[0x1fe] = iVar5;
    piVar8[0x1ff] = iVar3;
    puVar4 = (undefined4 *)(**(code **)(*piVar8 + 0x24))(piVar8,1);
    if (((*DAT_0046ff94 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0046ff94), iVar3 != 0)) {
      *DAT_0046ff98 = DAT_0046ff9c;
    }
    if ((puVar4 == (undefined4 *)0x0) ||
       (iVar3 = (**(code **)*puVar4)(puVar4,DAT_0046ff98), iVar3 == 0)) {
      puVar4 = (undefined4 *)0x0;
    }
    func_00498514((int)puVar4,DAT_0046ffa0);
    *(undefined4 *)(param_1 + 0xf0) = 0;
    return (undefined1 *)&local_78;
  }
  uVar7 = 0;
  bVar1 = *(byte *)(param_1 + 0xec) >> 6;
  if (bVar1 == 0) {
    uVar9 = *(byte *)(param_1 + 0xec) & 3;
    goto LAB_0046fcec;
  }
  uVar9 = 4;
  do {
    uVar6 = 0;
    while( true ) {
      func_00368B80(*(int *)(param_1 + 0xe0),uVar7,uVar6);
      uVar7 = uVar7 + 1;
      if (1 < (int)uVar7) {
        if (bVar1 != 1) {
          uVar7 = 4;
          uVar9 = 0;
          goto LAB_0046fd40;
        }
        uVar9 = 0;
        uVar7 = ((uint)*(byte *)(param_1 + 0xec) << 0x1c) >> 0x1e;
        do {
          if (uVar9 == uVar7) {
            uVar6 = 1;
          }
          else {
LAB_0046fd40:
            uVar6 = 0;
          }
          func_00368B1C(*(int *)(param_1 + 0xe0),uVar9,uVar6);
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < 2);
        goto LAB_0046fd5c;
      }
LAB_0046fcec:
      if (uVar7 != uVar9) break;
      uVar6 = 1;
    }
  } while( true );
}

