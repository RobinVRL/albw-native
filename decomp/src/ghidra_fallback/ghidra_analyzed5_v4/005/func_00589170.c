#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004905E0(float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0058E2B8(int *param_1);
extern int *DAT_00589558;
extern uint *DAT_0058955c;
extern undefined4 DAT_00589560;
extern undefined4 *DAT_00589564;
extern float DAT_00589568;
extern float DAT_0058956c;
extern uint DAT_00589570;

// USA 00589170 <- EU 00589148 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_00589558 int *
// GLOBAL DAT_0058955c uint *
// GLOBAL DAT_00589560 undefined4
// GLOBAL DAT_00589564 undefined4 *
// GLOBAL DAT_00589568 float
// GLOBAL DAT_0058956c float
// GLOBAL DAT_00589570 uint

undefined4
func_00589170(int param_1,float *param_2,int param_3,uint *param_4,int param_5,float fparam_0)

{
  bool bVar1;
  int *piVar2;
  uint *puVar3;
  ushort uVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 in_s1;
  float fVar11;
  ulonglong uVar12;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 ((int *)(albw_frame + 0x8))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_5c (*(int *)(albw_frame + 0x14))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define local_54 (*(float *)(albw_frame + 0x1c))
  #define local_50 (*(float *)(albw_frame + 0x20))
  #define uStack_3c (*(undefined8 *)(albw_frame + 0x34))
  #define iStack_34 (*(int *)(albw_frame + 0x3c))
  #define local_30 (*(float * *)(albw_frame + 0x40))
  #define local_2c (*(int *)(albw_frame + 0x44))
  #define puStack_28 (*(uint * *)(albw_frame + 0x48))
  puVar3 = DAT_0058955c;
  piVar2 = DAT_00589558;
  uVar10 = 0;
  uStack_3c = CONCAT44(in_s1,fparam_0);
  uVar12 = (ulonglong)(uint)ALBW_AS_U32(fparam_0);
  local_60 = DAT_00589560;
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  puStack_28 = param_4;
  do {
    piVar5 = (int *)(param_1 + 0xa0);
    if (uVar10 < 8) {
      piVar5 = piVar5 + uVar10;
    }
    if (*piVar5 == 0) {
      return 0;
    }
    puVar6 = (uint *)(param_1 + 0xa0);
    if (uVar10 < 8) {
      puVar6 = puVar6 + uVar10;
    }
    puVar7 = (undefined4 *)func_0052FBA0(*piVar2 + 0x3dbbc,*puVar6);
    if (((*puVar3 & 1) == 0) && (iVar8 = func_00100174((int *)DAT_0058955c), iVar8 != 0)) {
      *DAT_00589564 = local_60;
    }
    if ((puVar7 == (undefined4 *)0x0) ||
       (iVar8 = (**(code **)*puVar7)(puVar7,DAT_00589564), iVar8 == 0)) {
      puVar7 = (undefined4 *)0x0;
    }
    if (puVar7 != (undefined4 *)0x0) {
      func_00115C70(&local_58,(float *)(puVar7 + 0xf4),local_30);
      bVar1 = false;
      if ((*(ushort *)((int)puVar7 + 0x2e) & 0xff) == 5) {
        uVar4 = *(ushort *)(puVar7 + 0xc) & 0xff;
      }
      else {
        uVar4 = 0;
      }
      switch(uVar4) {
      case 3:
      case 4:
      case 7:
      case 8:
      case 0xb:
      case 0xc:
        bVar1 = true;
      }
      if (param_5 != 0) {
        bVar1 = (bool)(bVar1 ^ 1);
      }
      if (bVar1) {
        if (DAT_00589568 <= local_50) {
LAB_005892b0:
          if (param_4 == (uint *)0x0) goto LAB_00589314;
          if (((((uint)ALBW_AS_U32(local_58) <= (uint)ALBW_AS_U32(DAT_0058956c)) || ((int)*param_4 < -0x60000000)) ||
              (-0x20000000 < (int)*param_4)) &&
             ((((int)ALBW_AS_U32(local_58) < 0x3f400001 || ((int)*param_4 < 0x20000000)) ||
              (0x60000000 < (int)*param_4)))) {
            uVar9 = *param_4;
            if (bVar1) {
              if (((int)uVar9 < -0x20000000) || (0x20000000 < (int)uVar9)) {
LAB_00589314:
                local_54 = DAT_00589568;
                if (local_58 * local_58 + local_50 * local_50 <= ALBW_AS_F32(uVar12)) {
                  if (param_4 == (uint *)0x0) {
                    if (bVar1) {
                      if (0xc0000000 < local_2c + 0xe0000000U) {
                        if (param_5 == 0) {
                          return 3;
                        }
                        return 2;
                      }
                    }
                    else if (local_2c + 0x9fffffffU < 0x3fffffff) {
                      if (param_5 != 0) {
                        return 3;
                      }
                      return 2;
                    }
                    if (local_50 == DAT_00589568 && local_58 == DAT_00589568) {
                      local_68[0] = 0;
                    }
                    else if (local_50 < DAT_00589568) {
                      if (local_58 < DAT_00589568) {
                        if (local_58 < local_50) {
                          local_68[0] = func_004905E0(local_50 / local_58);
                          local_68[0] = -0x40000000 - local_68[0];
                        }
                        else {
                          local_68[0] = func_004905E0(local_58 / local_50);
                          local_68[0] = local_68[0] + -0x80000000;
                        }
                      }
                      else {
                        fVar11 = -local_50;
                        if (fVar11 < local_58) {
                          local_68[0] = func_004905E0(fVar11 / local_58);
                          local_68[0] = local_68[0] + 0x40000000;
                        }
                        else {
                          local_68[0] = func_004905E0(local_58 / fVar11);
                          local_68[0] = -0x80000000 - local_68[0];
                        }
                      }
                    }
                    else if (local_58 < DAT_00589568) {
                      fVar11 = -local_58;
                      if (local_50 < fVar11) {
                        local_68[0] = func_004905E0(local_50 / fVar11);
                        local_68[0] = local_68[0] + -0x40000000;
                      }
                      else {
                        local_68[0] = func_004905E0(fVar11 / local_50);
                        local_68[0] = -local_68[0];
                      }
                    }
                    else if (local_50 < local_58) {
                      local_68[0] = func_004905E0(local_50 / local_58);
                      local_68[0] = 0x40000000 - local_68[0];
                    }
                    else {
                      local_68[0] = func_004905E0(local_58 / local_50);
                    }
                    local_68[0] = local_2c - local_68[0];
                    uVar9 = func_0058E2B8(local_68);
                    if (uVar9 < 0x40000001) {
                      return 1;
                    }
                  }
                  else {
                    if (DAT_00589568 < local_58) {
                      local_5c = 0x40000000;
                    }
                    else {
                      local_5c = -0x40000000;
                    }
                    local_5c = *param_4 - local_5c;
                    uVar9 = func_0058E2B8(&local_5c);
                    if (uVar9 < DAT_00589570) {
                      if (bVar1) {
                        return 3;
                      }
                      return 2;
                    }
                  }
                }
              }
            }
            else if ((uVar9 < 0x60000000) || (0xa0000000 < uVar9)) goto LAB_00589314;
          }
        }
      }
      else if (local_50 <= DAT_00589568) goto LAB_005892b0;
    }
    uVar10 = uVar10 + 1;
    if (7 < (int)uVar10) {
      return 0;
    }
  } while( true );
}

