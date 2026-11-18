#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052138C(int param_1,char *param_2);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00581D60(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_00554d18;
extern undefined4 DAT_00554d1c;
extern undefined4 *DAT_00554d20;
extern int DAT_00554d24;
extern uint *DAT_00554d28;
extern undefined4 DAT_00554d2c;
extern undefined4 DAT_00554d30;
extern uint *DAT_00554d34;
extern undefined4 *DAT_00554d38;
extern int *DAT_00554d3c;
extern int DAT_00554d40;
extern undefined4 *DAT_00554d44;
extern int *DAT_00554d48;
extern int *DAT_00554d4c;

// USA 00554A2C <- EU 00554A04 (Ghidra, non-matching)
// GLOBAL DAT_00554d18 int *
// GLOBAL DAT_00554d1c undefined4
// GLOBAL DAT_00554d20 undefined4 *
// GLOBAL DAT_00554d24 int
// GLOBAL DAT_00554d28 uint *
// GLOBAL DAT_00554d2c undefined4
// GLOBAL DAT_00554d30 undefined4
// GLOBAL DAT_00554d34 uint *
// GLOBAL DAT_00554d38 undefined4 *
// GLOBAL DAT_00554d3c int *
// GLOBAL DAT_00554d40 int
// GLOBAL DAT_00554d44 undefined4 *
// GLOBAL DAT_00554d48 int *
// GLOBAL DAT_00554d4c int *

undefined4 * func_00554A2C(undefined4 param_1,float *param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar16;
  undefined8 uVar15;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_4c ((char *)(albw_frame + 0x4))
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(undefined2 *)(albw_frame + 0xc))
  #define local_42 (*(undefined1 *)(albw_frame + 0xe))
  #define local_40 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_3c (*(int *)(albw_frame + 0x14))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(float * *)(albw_frame + 0x24))
  #define uStack_28 (*(uint *)(albw_frame + 0x28))
  piVar1 = DAT_00554d18;
  local_40 = (undefined4 *)0x0;
  uVar14 = DAT_00554d1c;
  uStack_30 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  puVar4 = (undefined4 *)
           func_005841A8(*DAT_00554d18,*DAT_00554d20,*(int **)(DAT_00554d24 + *DAT_00554d18));
  uVar3 = DAT_00554d30;
  puVar2 = DAT_00554d28;
  puVar10 = *(undefined4 **)(*piVar1 + 0x3dbc8);
  if (puVar4 != puVar10) {
    uVar15 = CONCAT44(DAT_00554d2c,uVar14);
    do {
      puVar11 = (undefined4 *)*puVar4;
      if (((*DAT_00554d34 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_00554d34), iVar5 != 0)) {
        *DAT_00554d38 = uVar3;
      }
      if ((puVar11 == (undefined4 *)0x0) ||
         (iVar5 = (**(code **)*puVar11)(puVar11,DAT_00554d38), iVar5 == 0)) {
        puVar11 = (undefined4 *)0x0;
      }
      if ((((puVar11 != (undefined4 *)0x0) &&
           (iVar5 = func_00581D60(*DAT_00554d3c), iVar5 == *(short *)(puVar11 + 0x15))) &&
          ((*(ushort *)((int)puVar11 + 0x2e) & 0xff) == 0)) &&
         (((int)ALBW_AS_U32(((ALBW_AS_F32(puVar11[0xf4]) - *local_2c) * (ALBW_AS_F32(puVar11[0xf4]) - *local_2c) +
                (ALBW_AS_F32(puVar11[0xf6]) - local_2c[2]) * (ALBW_AS_F32(puVar11[0xf6]) - local_2c[2]))) <=
           DAT_00554d40 && (local_3c = (int)*(short *)((int)puVar11 + 0x5e), 0 < local_3c)))) {
        iVar5 = 0;
        while (puVar6 = (undefined4 *)func_0052FBDC(*piVar1 + 0x3dbbc,local_3c,iVar5),
              puVar6 != (undefined4 *)0x0) {
          if (((*puVar2 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_00554d28), iVar7 != 0)) {
            *DAT_00554d44 = uVar3;
          }
          iVar7 = (**(code **)*puVar6)(puVar6,DAT_00554d44);
          puVar8 = (undefined4 *)0x0;
          if (iVar7 != 0) {
            puVar8 = puVar6;
          }
          if (puVar8 != (undefined4 *)0x0) {
            local_44 = 0;
            local_4c[0] = '\0';
            local_48 = 0;
            local_42 = 0;
            iVar7 = func_0052138C((int)puVar8,local_4c);
            if (iVar7 != 0) {
              if ((*(char *)(*DAT_00554d48 + 0x18) == local_4c[0]) &&
                 (*(int *)(*DAT_00554d48 + 0x1c) == local_48)) {
                uVar9 = 1;
              }
              else {
                uVar9 = 0;
              }
              if (((param_3 | uVar9) & ~(uVar9 & param_3)) == 0) {
                iVar5 = *(int *)(puVar11[0x103] + 0x18);
                fVar16 = ALBW_AS_F32(((ulonglong)uVar15 >> 0x20));
                if (*(float *)(iVar5 + 0x40) - *(float *)(iVar5 + 0x34) <=
                    *(float *)(iVar5 + 0x48) - *(float *)(iVar5 + 0x3c)) {
                  fVar12 = **(float **)(*DAT_00554d4c + 0x1c);
                  fVar13 = *(float *)(iVar5 + 0x40) - fVar12;
                  fVar12 = *(float *)(iVar5 + 0x34) - fVar12;
                  if (fVar13 <= fVar16) {
                    fVar13 = -fVar13;
                  }
                  if (fVar12 <= fVar16) {
                    fVar12 = -fVar12;
                  }
                  fVar13 = fVar13 + fVar12;
                }
                else {
                  fVar12 = (*(float **)(*DAT_00554d4c + 0x1c))[2];
                  fVar13 = *(float *)(iVar5 + 0x48) - fVar12;
                  fVar12 = *(float *)(iVar5 + 0x3c) - fVar12;
                  if (fVar13 <= fVar16) {
                    fVar13 = -fVar13;
                  }
                  if (fVar12 <= fVar16) {
                    fVar12 = -fVar12;
                  }
                  fVar13 = fVar13 + fVar12;
                }
                if ((ALBW_AS_F32(uVar15) < fVar16) || (fVar13 < ALBW_AS_F32(uVar15))) {
                  uVar15 = CONCAT44(fVar16,fVar13);
                  local_40 = puVar11;
                }
                break;
              }
            }
          }
          iVar5 = iVar5 + 1;
        }
      }
      puVar4 = (undefined4 *)func_005841A8(*piVar1,*DAT_00554d20,puVar4 + 1);
    } while (puVar4 != puVar10);
  }
  return local_40;
}

