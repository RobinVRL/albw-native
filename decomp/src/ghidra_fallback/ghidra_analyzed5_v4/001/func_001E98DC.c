#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00434F68(int *param_1,int *param_2,int param_3,int param_4,float *param_5);
extern int func_00581A08(void);
extern uint *DAT_001e9d38;
extern undefined4 *DAT_001e9d3c;
extern undefined4 DAT_001e9d40;
extern int DAT_001e9d44;
extern float *DAT_001e9d48;
extern int DAT_001e9d4c;
extern float DAT_001e9d50;
extern undefined4 DAT_001e9d54;
extern int DAT_001e9d58;
extern float DAT_001e9d5c;
extern int DAT_001e9d60;
extern int DAT_001e9e38;
extern int DAT_001e9e3c;

// USA 001E98DC <- EU 001E98DC (Ghidra, non-matching)
// GLOBAL DAT_001e9d38 uint *
// GLOBAL DAT_001e9d3c undefined4 *
// GLOBAL DAT_001e9d40 undefined4
// GLOBAL DAT_001e9d44 int
// GLOBAL DAT_001e9d48 float *
// GLOBAL DAT_001e9d4c int
// GLOBAL DAT_001e9d50 float
// GLOBAL DAT_001e9d54 undefined4
// GLOBAL DAT_001e9d58 int
// GLOBAL DAT_001e9d5c float
// GLOBAL DAT_001e9d60 int
// GLOBAL DAT_001e9e38 int
// GLOBAL DAT_001e9e3c int

void func_001E98DC(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_b4 (*(float *)(albw_frame + 0xc))
  #define local_b0 (*(float *)(albw_frame + 0x10))
  #define local_ac (*(float *)(albw_frame + 0x14))
  #define local_98 (*(int *)(albw_frame + 0x28))
  #define local_94 (*(int *)(albw_frame + 0x2c))
  #define local_90 (*(int *)(albw_frame + 0x30))
  #define local_8c (*(int *)(albw_frame + 0x34))
  #define local_88 (*(int *)(albw_frame + 0x38))
  #define local_84 (*(int *)(albw_frame + 0x3c))
  #define local_80 (*(int *)(albw_frame + 0x40))
  #define local_7c (*(float *)(albw_frame + 0x44))
  #define local_78 (*(int *)(albw_frame + 0x48))
  #define local_74 (*(int *)(albw_frame + 0x4c))
  #define local_70 (*(float *)(albw_frame + 0x50))
  #define local_6c (*(float *)(albw_frame + 0x54))
  #define local_68 (*(float *)(albw_frame + 0x58))
  #define local_64 (*(float *)(albw_frame + 0x5c))
  #define local_60 (*(float *)(albw_frame + 0x60))
  #define local_5c (*(float *)(albw_frame + 0x64))
  #define local_58 (*(float *)(albw_frame + 0x68))
  #define local_54 (*(float *)(albw_frame + 0x6c))
  #define local_50 (*(float *)(albw_frame + 0x70))
  #define local_4c (*(float *)(albw_frame + 0x74))
  #define local_48 (*(float *)(albw_frame + 0x78))
  #define local_44 (*(float *)(albw_frame + 0x7c))
  #define local_40 (*(int *)(albw_frame + 0x80))
  #define local_3c (*(int *)(albw_frame + 0x84))
  #define local_38 (*(float *)(albw_frame + 0x88))
  #define local_34 (*(uint *)(albw_frame + 0x8c))
  puVar5 = (uint *)param_1[0xeec];
  if (puVar5 != (uint *)0x0) {
    for (uVar1 = 0; (int)uVar1 < (int)*puVar5; uVar1 = uVar1 + 1) {
      if (uVar1 < *puVar5) {
        puVar6 = (undefined4 *)(puVar5[2] + uVar1 * 4);
      }
      else {
        puVar6 = (undefined4 *)puVar5[2];
      }
      param_4 = (undefined4 *)param_2[0x1a];
      if ((undefined4 *)*puVar6 == param_4) {
        return;
      }
    }
  }
  if (((*DAT_001e9d38 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_001e9d38), iVar2 != 0)) {
    *DAT_001e9d3c = DAT_001e9d40;
  }
  if ((param_2 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*param_2)(param_2,DAT_001e9d3c), puVar6 = param_2, iVar2 == 0)) {
    puVar6 = (undefined4 *)0x0;
  }
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_80 = DAT_001e9d44;
  bVar10 = puVar6 != (undefined4 *)0x0;
  if (bVar10) {
    param_4 = puVar6 + 0x100;
  }
  local_34 = CONCAT22((*(undefined2 *)((char *)&local_34 + 2)),0x1f);
  if (bVar10) {
    param_4 = param_4 + 0x29;
  }
  if (!bVar10) {
    param_4 = (undefined4 *)0x0;
  }
  iVar2 = DAT_001e9d44;
  func_00434F68(&local_98,(int *)param_2[0x17],param_2[0x1c],(int)param_4,(float *)(param_2 + 1));
  uVar1 = local_34;
  if ((~*(ushort *)(param_2 + 0x19) & 0x1f) != 0) {
    uVar1 = param_2[0x19];
  }
  local_34 = CONCAT22((*(undefined2 *)((char *)&local_34 + 2)),(short)uVar1);
  iVar9 = param_2[0x1a];
  fVar12 = ALBW_AS_F32(param_1[0x28]);
  func_00115C70(&local_b4,(float *)(param_1 + 0x25),&local_7c);
  if ((((local_b4 * local_64 + local_b0 * local_60 + local_ac * local_5c <= fVar12) &&
       (local_b4 * local_58 + local_b0 * local_54 + local_ac * local_50 <= fVar12)) &&
      (local_b4 * local_4c + local_b0 * local_48 + local_ac * local_44 <= local_38 + fVar12)) &&
     (((fVar11 = -(local_b4 * local_70 + local_b0 * local_6c + local_ac * local_68),
       -fVar12 <= fVar11 && (fVar11 <= fVar12)) && (fVar11 != -3.4028235e+38)))) {
    uVar1 = local_34 & 0xffff;
    uVar3 = local_34 & 0x1f;
    if (uVar3 == 4) {
      uVar1 = local_34 & 0x7e0;
    }
    if (uVar3 != 4 || uVar1 != 0x260) {
      bVar10 = false;
      if (uVar3 == 4) {
        if (*(char *)(DAT_001e9d58 + (int)param_1) != '\0') {
          return;
        }
      }
      else if ((((1 << (local_34 & 0x1f) & 9U) != 0) &&
               (fVar12 = local_70 * *DAT_001e9d48 + local_6c * DAT_001e9d48[1] +
                         local_68 * DAT_001e9d48[2], (int)ALBW_AS_U32(fVar12) < DAT_001e9d4c)) &&
              ((uint)ALBW_AS_U32(fVar12) < (uint)ALBW_AS_U32(DAT_001e9d50))) {
        bVar10 = true;
      }
      iVar4 = func_00581A08();
      uVar1 = *(uint *)(iVar4 + 0x1c);
      if (bVar10) {
        piVar7 = (int *)*param_1;
        if (*piVar7 < piVar7[1]) {
          piVar8 = (int *)piVar7[3];
          if (piVar8 != (int *)0x0) {
            piVar7[3] = *piVar8;
            func_00110490(piVar8,0x80);
            *piVar8 = 0;
            piVar8[2] = 0;
            piVar8[3] = 0;
            piVar8[4] = 0;
            piVar8[8] = iVar2;
            *(undefined2 *)(piVar8 + 0x1b) = 0x1f;
            piVar8[0x1c] = 0;
            piVar8[0x1d] = 0;
            piVar8[0x1e] = 0;
            piVar8[0x1f] = 0;
          }
          if (*piVar7 < piVar7[1]) {
            *(int **)(piVar7[2] + *piVar7 * 4) = piVar8;
            *piVar7 = *piVar7 + 1;
          }
        }
        else {
          piVar8 = (int *)0x0;
        }
      }
      else {
        if ((1 << (uVar1 & 0xff) & 5U) == 0) {
          fVar12 = local_6c;
          if (local_6c <= DAT_001e9d5c) {
            fVar12 = -local_6c;
          }
          if (DAT_001e9d60 < (int)ALBW_AS_U32(fVar12)) {
            return;
          }
        }
        piVar7 = (int *)param_1[1];
        if (piVar7[1] <= *piVar7) {
          return;
        }
        piVar8 = (int *)piVar7[3];
        if (piVar8 != (int *)0x0) {
          piVar7[3] = *piVar8;
          func_00110490(piVar8,0x80);
          *piVar8 = 0;
          piVar8[2] = 0;
          piVar8[3] = 0;
          piVar8[4] = 0;
          piVar8[8] = iVar2;
          *(undefined2 *)(piVar8 + 0x1b) = 0x1f;
          piVar8[0x1c] = 0;
          piVar8[0x1d] = 0;
          piVar8[0x1e] = 0;
          piVar8[0x1f] = 0;
        }
        if (*piVar7 < piVar7[1]) {
          *(int **)(piVar7[2] + *piVar7 * 4) = piVar8;
          *piVar7 = *piVar7 + 1;
        }
      }
      piVar8[2] = local_98;
      piVar8[3] = local_94;
      piVar8[4] = local_90;
      piVar8[5] = local_8c;
      piVar8[6] = local_88;
      piVar8[7] = local_84;
      piVar8[8] = local_80;
      piVar8[9] = (int)ALBW_AS_U32(local_7c);
      piVar8[10] = local_78;
      piVar8[0xb] = local_74;
      piVar8[0xc] = (int)ALBW_AS_U32(local_70);
      piVar8[0xd] = (int)ALBW_AS_U32(local_6c);
      piVar8[0xe] = (int)ALBW_AS_U32(local_68);
      piVar8[0xf] = (int)ALBW_AS_U32(local_64);
      piVar8[0x10] = (int)ALBW_AS_U32(local_60);
      piVar8[0x11] = (int)ALBW_AS_U32(local_5c);
      piVar8[0x12] = (int)ALBW_AS_U32(local_58);
      piVar8[0x13] = (int)ALBW_AS_U32(local_54);
      piVar8[0x14] = (int)ALBW_AS_U32(local_50);
      piVar8[0x15] = (int)ALBW_AS_U32(local_4c);
      piVar8[0x16] = (int)ALBW_AS_U32(local_48);
      piVar8[0x17] = (int)ALBW_AS_U32(local_44);
      piVar8[0x18] = local_40;
      piVar8[0x19] = local_3c;
      piVar8[0x1a] = (int)ALBW_AS_U32(local_38);
      *(undefined2 *)(piVar8 + 0x1b) = (undefined2)local_34;
      piVar8[1] = uVar1;
      *piVar8 = iVar9;
      if (((param_1[10] == 0) && (bVar10)) && (iVar9 == *(int *)(DAT_001e9e38 + (int)param_1))) {
        if (local_90 == *(int *)(DAT_001e9e3c + (int)param_1)) {
          param_1[10] = piVar8;
        }
        return;
      }
    }
  }
  return;
}

