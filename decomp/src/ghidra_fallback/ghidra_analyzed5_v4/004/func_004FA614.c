#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_0032493C(undefined4 *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_004F6F14(int param_1,float *param_2,float *param_3,uint param_4,uint param_5);
extern int func_0054D884(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern undefined4 *DAT_004fa84c;
extern undefined4 DAT_004fa850;
extern undefined4 *DAT_004fa854;
extern undefined4 DAT_004fa858;
extern undefined4 DAT_004fa85c;
extern undefined4 DAT_004fa860;
extern float *DAT_004fa864;

// USA 004FA614 <- EU 004FA5EC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_004fa84c undefined4 *
// GLOBAL DAT_004fa850 undefined4
// GLOBAL DAT_004fa854 undefined4 *
// GLOBAL DAT_004fa858 undefined4
// GLOBAL DAT_004fa85c undefined4
// GLOBAL DAT_004fa860 undefined4
// GLOBAL DAT_004fa864 float *

undefined4 *
func_004FA614(int param_1,int param_2,uint param_3,undefined2 *param_4,float *param_5,int param_6)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  byte *pbVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_44 ((uint *)(albw_frame + 0xc))
  #define iStack_34 (*(int *)(albw_frame + 0x1c))
  #define iStack_30 (*(int *)(albw_frame + 0x20))
  #define uStack_2c (*(uint *)(albw_frame + 0x24))
  #define local_28 (*(undefined2 * *)(albw_frame + 0x28))
  if (((int)param_3 < 0) ||
     (iStack_34 = param_1, iStack_30 = param_2, uStack_2c = param_3, local_28 = param_4,
     puVar2 = (undefined4 *)func_0010BAB4(0x54), puVar2 == (undefined4 *)0x0)) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = func_0010DA7C(puVar2,0,3);
    puVar3 = DAT_004fa84c;
    uVar7 = DAT_004fa84c[1];
    uVar11 = DAT_004fa84c[2];
    puVar2[4] = *DAT_004fa84c;
    puVar2[5] = uVar7;
    puVar2[6] = uVar11;
    uVar11 = DAT_004fa858;
    uVar7 = *puVar3;
    uVar8 = puVar3[1];
    puVar2[9] = puVar3[2];
    puVar2[7] = uVar7;
    puVar2[8] = uVar8;
    uVar7 = DAT_004fa850;
    puVar2[0xb] = 0;
    *puVar2 = uVar7;
    puVar2[10] = param_2;
    puVar2[0xc] = 0;
    puVar2[0x12] = puVar2 + 0xe;
    puVar3 = DAT_004fa854;
    puVar2[0xd] = 0;
    puVar2[0xe] = uVar11;
    *(undefined1 *)(puVar2 + 0x13) = 0;
    puVar2[0x14] = 0;
    uVar7 = *puVar3;
    uVar11 = puVar3[1];
    puVar2[0xf] = puVar2;
    puVar2[0x10] = uVar7;
    puVar2[0x11] = uVar11;
    puVar3 = (undefined4 *)func_0010BAB4(100);
    if (puVar3 == (undefined4 *)0x0) {
      iVar10 = 0;
    }
    else {
      iVar10 = func_004EE484(puVar3);
    }
    uVar7 = DAT_004fa85c;
    puVar2[0xb] = iVar10;
    fVar13 = func_0054DE3C(param_1,param_3,1);
    puVar2[4] = uVar7;
    puVar2[5] = ALBW_AS_U32(fVar13);
    puVar2[6] = uVar7;
    iVar4 = func_0054D884(*(int *)(param_1 + 0x2d0) + 0x18,param_3);
    puVar2[7] = *(undefined4 *)(iVar4 + 4);
    puVar2[8] = *(undefined4 *)(iVar4 + 8);
    puVar2[9] = *(undefined4 *)(iVar4 + 0xc);
    puVar3 = (undefined4 *)func_0010BAB4(0xc);
    uVar7 = 0;
    if (puVar3 != (undefined4 *)0x0) {
      uVar7 = func_0032493C(puVar3);
    }
    puVar2[0xd] = uVar7;
    iVar4 = func_0054D964(param_1,param_3);
    puVar2[0xc] = iVar4;
    local_44[0] = *(uint *)(param_1 + 0x2cc);
    func_0014EB8C(iVar10,iVar4,local_28,local_44,*(undefined2 *)(param_1 + 0x54),puVar2[0x12],
                  (short)DAT_004fa860);
    pfVar1 = DAT_004fa864;
    *(uint *)(iVar4 + 0x2c) = *(uint *)(iVar4 + 0x2c) | 8;
    func_004F6F14((int)puVar2,param_5,pfVar1,0,0);
    if (param_6 != 0) {
      iVar4 = param_2 + 0x634;
      pbVar12 = (byte *)(param_2 + 0x653);
      if (iVar10 != 0) {
        uVar9 = (uint)*pbVar12;
        if (uVar9 < 7) {
          if (uVar9 != 0) {
            uVar5 = uVar9 & 1;
            uVar6 = 0;
            if ((*pbVar12 & 1) != 0) {
              do {
                if (*(int *)(iVar4 + uVar6 * 4) == iVar10) {
                  return puVar2;
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 < uVar5);
            }
            for (; uVar5 < uVar9; uVar5 = uVar5 + 2) {
              if (*(int *)(iVar4 + uVar5 * 4) == iVar10) {
                return puVar2;
              }
              if (*(int *)(iVar4 + uVar5 * 4 + 4) == iVar10) {
                return puVar2;
              }
            }
          }
          *(int *)(iVar4 + uVar9 * 4) = iVar10;
          *pbVar12 = *pbVar12 + 1;
        }
      }
    }
  }
  return puVar2;
}

