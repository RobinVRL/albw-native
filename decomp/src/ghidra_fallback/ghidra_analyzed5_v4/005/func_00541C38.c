// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00556E64(int param_1);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0058E2B8(int *param_1);
extern float DAT_00541f4c;
extern float DAT_00541f50;
extern int *DAT_00541f54;
extern int *DAT_00541f58;
extern uint *DAT_00541f5c;
extern int DAT_00541f60;
extern int *DAT_00541f64;
extern int *DAT_00541f68;
extern int *DAT_00541f6c;
extern int *DAT_00541f70;
extern int *DAT_00541f74;

// USA 00541C38 <- EU 00541C10 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_00541f4c float
// GLOBAL DAT_00541f50 float
// GLOBAL DAT_00541f54 int *
// GLOBAL DAT_00541f58 int *
// GLOBAL DAT_00541f5c uint *
// GLOBAL DAT_00541f60 int
// GLOBAL DAT_00541f64 int *
// GLOBAL DAT_00541f68 int *
// GLOBAL DAT_00541f6c int *
// GLOBAL DAT_00541f70 int *
// GLOBAL DAT_00541f74 int *

undefined4
func_00541C38(int param_1,float *param_2,undefined1 *param_3,undefined4 *param_4,float *param_5,
             int param_6)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint in_fpscr;
  uint uVar13;
  uint uVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define iStack_34 (*(int *)(albw_frame + 0xc))
  #define pfStack_30 (*(float * *)(albw_frame + 0x10))
  #define puStack_2c (*(undefined1 * *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 * *)(albw_frame + 0x18))
  iVar6 = *(int *)(param_1 + 0x410);
  if (*param_5 < *(float *)(iVar6 + 0x34)) {
    return 0;
  }
  if (param_5[2] + DAT_00541f4c < *(float *)(iVar6 + 0x3c)) {
    return 0;
  }
  if (NAN(*(float *)(iVar6 + 0x40)) || NAN(*param_5 - DAT_00541f4c)) {
    return 0;
  }
  if (!NAN(*(float *)(iVar6 + 0x48)) && !NAN(param_5[2] - DAT_00541f4c)) {
    if (param_5[1] + DAT_00541f4c < *(float *)(iVar6 + 0x38)) {
      return 0;
    }
    fVar15 = param_5[1] - DAT_00541f4c;
    uVar13 = in_fpscr & 0xfffffff | (uint)(fVar15 == *(float *)(iVar6 + 0x44)) << 0x1e |
             (uint)(*(float *)(iVar6 + 0x44) <= fVar15) << 0x1d;
    bVar1 = (byte)(uVar13 >> 0x18);
    if ((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) {
      return 0;
    }
    iStack_34 = param_1;
    pfStack_30 = param_2;
    puStack_2c = param_3;
    local_28 = param_4;
    if ((*(short *)(param_1 + 0x36) != 0) && (bVar5 = func_00588BF0(param_1,0), !bVar5)) {
      return 0;
    }
    bVar5 = func_00588BF0(param_1,1);
    if (bVar5) {
      return 0;
    }
    if (*(short *)(param_1 + 0x32) != 0) {
      iVar6 = *(int *)(param_1 + 0x410);
      fVar15 = *(float *)(iVar6 + 0x58);
      uVar13 = uVar13 & 0xfffffff | (uint)(fVar15 < *(float *)(iVar6 + 0x60)) << 0x1f;
      uVar14 = uVar13 | (uint)(NAN(fVar15) || NAN(*(float *)(iVar6 + 0x60))) << 0x1c;
      if ((byte)(uVar13 >> 0x1f) == ((byte)(uVar14 >> 0x1c) & 1)) {
        local_38 = 0x40000000;
      }
      else {
        local_38 = 0;
      }
      local_38 = param_6 - local_38;
      iVar7 = func_0058E2B8(&local_38);
      fVar15 = (float)VectorUnsignedToFloat(iVar7,(byte)(uVar14 >> 0x15) & 3);
      fVar15 = fVar15 * DAT_00541f50;
      if (*(float *)(iVar6 + 0x58) < *(float *)(iVar6 + 0x60)) {
        if (0xc00000 < (int)ALBW_AS_U32(fVar15) + 0xc1800000U) {
          return 0;
        }
      }
      else {
        if ((int)ALBW_AS_U32(fVar15) < 0x3e800001) {
          return 0;
        }
        if (0x3f3fffff < (int)ALBW_AS_U32(fVar15)) {
          return 0;
        }
      }
    }
    *param_3 = 0;
    piVar3 = DAT_00541f58;
    piVar2 = DAT_00541f54;
    bVar5 = *(int *)(param_1 + 0x420) == 0;
    iVar6 = 0;
    if (!bVar5) {
      iVar6 = *(int *)(param_1 + 0x424);
    }
    if (bVar5 || iVar6 == 0) {
      if (((*(int *)(param_1 + 0x48) != 0x3f800000) ||
          (bVar5 = func_00556E64(*DAT_00541f58), !bVar5)) ||
         ((iVar6 = func_0052FBA0(*piVar2 + 0x3dbbc,*(uint *)(*(int *)(*piVar3 + 0x28) + 0x14)),
          iVar6 != 0 &&
          ((((iVar6 = func_00588BE4(iVar6), iVar6 == *DAT_00541f68 || (iVar6 == *DAT_00541f6c)) ||
            (iVar6 == *DAT_00541f70)) || (iVar6 == *DAT_00541f74)))))) {
        fVar15 = *(float *)(param_1 + 0x418);
        fVar10 = *(float *)(param_1 + 0x41c);
        *param_2 = *(float *)(param_1 + 0x414);
        param_2[1] = fVar15;
        param_2[2] = fVar10;
        return 1;
      }
    }
    else {
      puVar8 = (undefined4 *)
               func_0052FBA0(*DAT_00541f54 + 0x3dbbc,
                             *(uint *)(*(int *)(*DAT_00541f58 + 0x28) + 0x14));
      puVar4 = DAT_00541f5c;
      if ((puVar8 != (undefined4 *)0x0) && (iVar6 = 0, 0 < *(int *)(param_1 + 0x420))) {
        local_38 = DAT_00541f60;
        do {
          puVar9 = (undefined4 *)
                   func_0052FBDC(*piVar2 + 0x3dbbc,*(int *)(*(int *)(param_1 + 0x424) + iVar6 * 4),0
                                );
          if (puVar9 == puVar8) {
            if (((*puVar4 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_00541f5c), iVar7 != 0)) {
              *DAT_00541f64 = local_38;
            }
            if ((puVar8 == (undefined4 *)0x0) ||
               (iVar7 = (**(code **)*puVar8)(puVar8,DAT_00541f64), puVar9 = puVar8, iVar7 == 0)) {
              puVar9 = (undefined4 *)0x0;
            }
            if (puVar9 != (undefined4 *)0x0) {
              func_00115C54(param_2,(float *)(puVar9 + 0xf4),(float *)(param_1 + 0x414));
              uVar11 = puVar9[0xf5];
              uVar12 = puVar9[0xf6];
              *local_28 = puVar9[0xf4];
              local_28[1] = uVar11;
              local_28[2] = uVar12;
              *param_3 = 1;
              return 1;
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(param_1 + 0x420));
      }
    }
    return 0;
  }
  return 0;
}

