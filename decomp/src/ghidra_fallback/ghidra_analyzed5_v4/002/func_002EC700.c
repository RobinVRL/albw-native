#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0024D3F0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4, int param_5,undefined2 param_6);
extern int func_0054F9E4(int param_1,uint param_2);
extern int func_0054FAC0(int param_1,uint param_2);
extern float DAT_002ec9fc;
extern undefined4 DAT_002eca00;
extern undefined4 DAT_002eca04;
extern undefined4 DAT_002eca08;
extern undefined4 DAT_002eca0c;

// USA 002EC700 <- EU 002EC6DC (Ghidra, non-matching)
// GLOBAL DAT_002ec9fc float
// GLOBAL DAT_002eca00 undefined4
// GLOBAL DAT_002eca04 undefined4
// GLOBAL DAT_002eca08 undefined4
// GLOBAL DAT_002eca0c undefined4

/* WARNING: Variable defined which should be unmapped: objStack_64 */

bool func_002EC700(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint in_fpscr;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define objStack_64 ((uint *)(albw_frame + 0xc))
  #define local_5c (*(int *)(albw_frame + 0x14))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define local_54 (*(int *)(albw_frame + 0x1c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_4c (*(undefined4 * *)(albw_frame + 0x24))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_40 (*(int * *)(albw_frame + 0x30))
  #define local_3c (*(float *)(albw_frame + 0x34))
  #define local_38 (*(int *)(albw_frame + 0x38))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x3c))
  fVar10 = DAT_002ec9fc;
  puVar7 = (undefined4 *)(param_1 + 0xe30);
  if (5 < *(uint *)(param_1 + 0xd6c)) goto LAB_002ec9a8;
  puVar4 = (undefined4 *)(param_1 + 0xd54);
  if (*(uint *)(param_1 + 0xd54) < *(uint *)(param_1 + 0xd58)) {
    *(uint *)(param_1 + 0xd54) = *(uint *)(param_1 + 0xd54) + 1;
  }
  else {
    local_40 = (int *)(param_1 + 0xd64);
    uVar6 = *(uint *)(param_1 + 0xe3c);
    iVar2 = *(int *)(param_1 + 0xd64);
    if (*(char *)(param_1 + 0xd68) == '\0') {
      iVar2 = uVar6 - iVar2;
    }
    local_4c = puVar7;
    lVar11 = func_001104E4(iVar2 + *(int *)(param_1 + 0xd60),uVar6);
    uVar5 = (uint)((ulonglong)lVar11 >> 0x20);
    local_54 = func_0054FAC0((int)puVar7,uVar5);
    local_54 = local_54 + -0x80000000;
    puVar7 = (undefined4 *)func_0054F9E4((int)puVar7,uVar5);
    *(undefined4 *)(param_1 + 0xbe4) = *puVar7;
    *(undefined4 *)(param_1 + 0xbe8) = puVar7[1];
    *(undefined4 *)(param_1 + 0xbec) = puVar7[2];
    uVar8 = DAT_002eca04;
    local_5c = param_1 + 0x200;
    if (*(int *)(param_1 + 0xd6c) < 3) {
      *(undefined4 *)(param_1 + 0xd58) = 0xf;
      *(undefined4 *)(param_1 + 0xd5c) = uVar8;
      *puVar4 = 0;
      local_5c = *(int *)(param_1 + 0x2cc);
      objStack_64[0] = *(uint *)(param_1 + 0xd70);
      func_0024D3F0(local_4c,&local_5c,&local_54,0,0,(undefined2)objStack_64[0]);
    }
    else {
      *(undefined4 *)(param_1 + 0xd58) = 0x14;
      *(undefined4 *)(param_1 + 0xd5c) = DAT_002eca00;
      *puVar4 = 0;
      local_38 = *(int *)(param_1 + 0x2cc);
      uVar5 = *(int *)(param_1 + 0xd6c) - 2;
      objStack_64[0] = *(int *)(param_1 + 0xd6c) - 3;
      if ((*(int *)(param_1 + 0xd70) + 1U & 3) == 0) {
        uVar5 = 1;
        objStack_64[0] = uVar5;
      }
      func_0024D3F0(local_4c,&local_38,&local_54,0,0,(undefined2)objStack_64[0]);
      local_54 = local_54 + -0x80000000;
      local_38 = *(int *)(local_5c + 0xcc);
      (*(undefined2 *)((char *)&objStack_64[0] + 0)) = (undefined2)uVar5;
      uVar1 = (undefined2)objStack_64[0];
      objStack_64[0] = uVar5;
      func_0024D3F0(local_4c,&local_38,&local_54,0,0,uVar1);
    }
    *(int *)(param_1 + 0xd70) = *(int *)(param_1 + 0xd70) + 1;
    if (*(int *)(param_1 + 0xd64) < (int)uVar6) {
      *local_40 = *(int *)(param_1 + 0xd64) + 1;
    }
    if (*(uint *)(param_1 + 0xd64) == uVar6) {
      iVar2 = *(int *)(param_1 + 0xd6c);
      if (*(char *)(param_1 + 0xd48) == '\0') {
        if (iVar2 < 2) {
          *(int *)(param_1 + 0xd6c) = iVar2 + 1;
          uVar8 = DAT_002eca08;
          *(bool *)(param_1 + 0xd68) = *(char *)(param_1 + 0xd68) == '\0';
          *(undefined4 *)(param_1 + 0xd58) = 0x1e;
          goto LAB_002ec91c;
        }
      }
      else if (iVar2 < 5) {
        *(int *)(param_1 + 0xd6c) = iVar2 + 1;
        uVar8 = DAT_002eca0c;
        *(bool *)(param_1 + 0xd68) = *(char *)(param_1 + 0xd68) == '\0';
        *(undefined4 *)(param_1 + 0xd58) = 0x3c;
LAB_002ec91c:
        *(undefined4 *)(param_1 + 0xd5c) = uVar8;
        *puVar4 = 0;
        *(undefined4 *)(param_1 + 0xd64) = 0;
        goto LAB_002ec928;
      }
      *(undefined4 *)(param_1 + 0xd6c) = 6;
    }
  }
LAB_002ec928:
  pfVar3 = (float *)(param_1 + 0x3d0);
  iVar2 = *(int *)(param_1 + 0xd58) - *(int *)(param_1 + 0xd54);
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  local_4c = *(undefined4 **)(param_1 + 0xbe4);
  uStack_48 = *(undefined4 *)(param_1 + 0xbe8);
  uStack_44 = *(undefined4 *)(param_1 + 0xbec);
  fVar9 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = fVar10 / fVar9;
  func_00115C70(&local_3c,(float *)&local_4c,pfVar3);
  local_58 = local_3c;
  local_54 = local_38;
  uStack_50 = uStack_34;
  func_00115D70((float *)&local_40,&local_58,fVar10);
  objStack_64[0] = (uint)local_40;
  objStack_64[1] = (uint)ALBW_AS_U32(local_3c);
  local_5c = local_38;
  func_00115C54(pfVar3,pfVar3,(float *)objStack_64);
LAB_002ec9a8:
  return *(int *)(param_1 + 0xd6c) == 6;
}

