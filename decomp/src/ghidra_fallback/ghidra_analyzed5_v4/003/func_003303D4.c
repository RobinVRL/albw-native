#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_0048D854(undefined4 *param_1);
extern int func_00494CF8(undefined4 *param_1,undefined4 param_2,int *param_3);
extern int func_004A0988(int param_1,int param_2);
extern int func_004A09C4(int param_1,int param_2,uint param_3);
extern int func_004A0AFC(undefined4 *param_1);
extern undefined4 DAT_00330654;
extern int *DAT_00330658;
extern undefined4 DAT_0033065c;
extern float *DAT_00330660;
extern int DAT_00330670;
extern undefined4 DAT_00330674;
extern int DAT_00330678;
extern char s_Pause_Menu_00330664[];

// USA 003303D4 <- EU 003303B0 (Ghidra, non-matching)
// GLOBAL DAT_00330654 undefined4
// GLOBAL DAT_00330658 int *
// GLOBAL DAT_0033065c undefined4
// GLOBAL DAT_00330660 float *
// GLOBAL DAT_00330670 int
// GLOBAL DAT_00330674 undefined4
// GLOBAL DAT_00330678 int
// GLOBAL s_Pause_Menu_00330664 string

undefined4 * func_003303D4(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(uint * *)(albw_frame + 0x14))
  puVar1 = func_0010DA7C(param_1,0,3);
  *puVar1 = DAT_00330654;
  puVar1 = func_004A0AFC(puVar1 + 4);
  iVar2 = *(int *)(*DAT_00330658 + 0x1b0);
  uVar5 = *(undefined4 *)(iVar2 + 4);
  uVar6 = *(undefined4 *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  uVar12 = *(undefined4 *)(iVar2 + 0x10);
  puVar1[0x72] = DAT_0033065c;
  puVar1[0x73] = uVar5;
  puVar1[0x74] = uVar6;
  puVar1[0x75] = uVar7;
  puVar1[0x76] = uVar12;
  *(undefined1 *)(puVar1 + 0x77) = *(undefined1 *)(iVar2 + 0x14);
  *(undefined1 *)(puVar1 + 0x78) = 0;
  fVar15 = DAT_00330660[-1];
  fVar16 = DAT_00330660[-2];
  fVar13 = *DAT_00330660;
  fVar14 = ((ALBW_AS_F32(puVar1[0x76]) - ALBW_AS_F32(puVar1[0x74])) - DAT_00330660[1]) - fVar15;
  puVar1[0x73] = ALBW_AS_U32(fVar13);
  puVar1[0x74] = ALBW_AS_U32(fVar14);
  puVar1[0x75] = ALBW_AS_U32(fVar13 + fVar16);
  puVar1[0x76] = ALBW_AS_U32(fVar14 + fVar15);
  puVar1[0xb] = puVar1 + 0x72;
  iVar2 = DAT_00330670;
  local_38 = DAT_00330670;
  local_34 = s_Pause_Menu_00330664;
  puVar3 = (undefined4 *)func_0010CF28(0x9c,(int *)0x0,4);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = func_00494CF8(puVar3,0,&local_38);
    *puVar3 = DAT_00330674;
    puVar3[0x22] = puVar3 + 0x21;
    puVar3[0x23] = 0;
    puVar3[0x21] = puVar3 + 0x21;
    puVar3[0x24] = 0;
    puVar3[0x25] = 0;
    puVar3[0x26] = 0;
  }
  piVar4 = (int *)func_0010CEE0(200,(int *)0x0,4);
  if (piVar4 != (int *)0x0) {
    puVar3[0x24] = piVar4;
    *piVar4 = (int)(piVar4 + 0x19);
    piVar4[0x19] = 0;
    puVar3[0x25] = piVar4;
    puVar3[0x26] = 2;
  }
  func_004A0988((int)puVar1,(int)puVar3);
  func_004A09C4((int)puVar1,(int)puVar3,1);
  iVar9 = 0;
  do {
    piVar4 = (int *)(DAT_00330678 + iVar9 * 8);
    (**(code **)(*piVar4 + 8))(piVar4);
    local_2c = (uint *)piVar4[1];
    local_30 = iVar2;
    if ((int)puVar3[0x23] < (int)puVar3[0x26]) {
      puVar8 = (undefined4 *)puVar3[0x24];
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar3[0x24] = *puVar8;
        puVar8 = func_0048D854(puVar8);
        puVar8[0x17] = 0;
        puVar8[0x18] = 0;
      }
      func_0010F1DC(puVar3 + 0x21,puVar8 + 0x17);
      puVar3[0x23] = puVar3[0x23] + 1;
    }
    else {
      puVar8 = (undefined4 *)0x0;
    }
    puVar8[1] = iVar9;
    puVar8[2] = 0xffffffff;
    puVar11 = (uint *)puVar8[5];
    (**(code **)(local_30 + 8))(&local_30);
    uVar10 = 0;
    do {
      if (*(char *)((int)local_2c + uVar10) == '\0') {
        if ((int)uVar10 < 0x40001) goto LAB_00330604;
        break;
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 0x40001);
    uVar10 = 0;
LAB_00330604:
    if ((int)puVar8[6] <= (int)uVar10) {
      uVar10 = puVar8[6] - 1;
    }
    (**(code **)(local_30 + 8))(&local_30);
    func_0010E3C4(puVar11,local_2c,uVar10);
    iVar9 = iVar9 + 1;
    *(undefined1 *)((int)puVar11 + uVar10) = 0;
    puVar8[3] = 0;
    if (1 < iVar9) {
      return puVar1 + -4;
    }
  } while( true );
}

