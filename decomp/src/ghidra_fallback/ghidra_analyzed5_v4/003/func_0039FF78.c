#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00581D60(int param_1);
extern int *DAT_003a01f4;
extern int *DAT_003a01f8;
extern uint *DAT_003a01fc;
extern int *DAT_003a0200;
extern float DAT_003a0204;
extern uint DAT_003a0208;
extern float DAT_003a020c;
extern int DAT_003a0210;

// USA 0039FF78 <- EU 0039FF54 (Ghidra, non-matching)
// GLOBAL DAT_003a01f4 int *
// GLOBAL DAT_003a01f8 int *
// GLOBAL DAT_003a01fc uint *
// GLOBAL DAT_003a0200 int *
// GLOBAL DAT_003a0204 float
// GLOBAL DAT_003a0208 uint
// GLOBAL DAT_003a020c float
// GLOBAL DAT_003a0210 int

void func_0039FF78(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  _Alignas(8) unsigned char albw_frame[0x330];
  #define local_330 (*(int *)(albw_frame + 0x0))
  #define local_32c (*(float *)(albw_frame + 0x4))
  #define local_328 (*(float *)(albw_frame + 0x8))
  #define local_324 (*(float *)(albw_frame + 0xc))
  #define local_314 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_310 (*(undefined4 *)(albw_frame + 0x20))
  #define local_30c (*(undefined4 *)(albw_frame + 0x24))
  #define local_308 (*(undefined2 *)(albw_frame + 0x28))
  #define local_306 (*(undefined2 *)(albw_frame + 0x2a))
  #define local_304 (*(undefined2 *)(albw_frame + 0x2c))
  #define local_2e8 (*(undefined4 *)(albw_frame + 0x48))
  #define local_2e4 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_2e0 (*(undefined2 *)(albw_frame + 0x50))
  #define local_70 (*(undefined4 *)(albw_frame + 0x2c0))
  #define local_68 (*(undefined1 * *)(albw_frame + 0x2c8))
  #define local_64 (*(int *)(albw_frame + 0x2cc))
  #define local_60 (*(int *)(albw_frame + 0x2d0))
  #define local_5c (*(int *)(albw_frame + 0x2d4))
  #define auStack_58 ((undefined1 *)(albw_frame + 0x2d8))
  #define local_40 (*(float *)(albw_frame + 0x2f0))
  #define local_3c (*(float *)(albw_frame + 0x2f4))
  #define local_38 (*(float *)(albw_frame + 0x2f8))
  piVar4 = DAT_003a01f4;
  iVar10 = 0;
  local_68 = auStack_58;
  local_60 = 0;
  local_5c = 0;
  local_64 = 2;
  iVar9 = 0;
  do {
    uVar6 = *(uint *)(param_1 + 800 + iVar9 * 4);
    if (uVar6 != 0) {
      iVar1 = func_0052FBA0(*piVar4 + 0x3dbbc,uVar6);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 800 + iVar9 * 4) = 0;
      }
      else if (local_5c < local_64) {
        iVar7 = local_5c + local_60;
        if (local_64 <= iVar7) {
          iVar7 = iVar7 - local_64;
        }
        puVar8 = (undefined4 *)(local_68 + iVar7 * 0xc);
        *puVar8 = *(undefined4 *)(iVar1 + 8);
        puVar8[1] = *(undefined4 *)(iVar1 + 0xc);
        puVar8[2] = *(undefined4 *)(iVar1 + 0x10);
        local_5c = local_5c + 1;
      }
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 2);
  iVar1 = *DAT_003a01f8;
  local_310 = 0;
  local_30c = 0;
  local_314 = 0;
  local_2e8 = 0;
  local_2e4 = 0;
  local_70 = 0;
  func_002DFF7C(&local_330);
  local_330 = func_0019B04C(*DAT_003a01fc);
  uVar2 = func_00581D60(*DAT_003a0200);
  iVar9 = DAT_003a0210;
  local_2e0 = (undefined2)uVar2;
  uVar16 = (ulonglong)DAT_003a0208;
  local_308 = 1;
  local_306 = 600;
  local_304 = 1;
  fVar14 = DAT_003a0204;
  fVar15 = DAT_003a020c;
  do {
    if (*(int *)(param_1 + 800 + iVar10 * 4) == 0) {
      uVar6 = func_00111A64((uint *)(iVar1 + 0x660));
      uVar3 = func_00111A64((uint *)(iVar1 + 0x660));
      fVar12 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      func_004D80A4(&local_40,uVar6,fVar12 * ALBW_AS_F32(uVar16) * fVar14);
      iVar7 = 0;
      local_3c = fVar15;
      if (local_5c != 0) {
        do {
          iVar11 = local_60 + iVar7;
          if (local_64 <= iVar11) {
            iVar11 = iVar11 - local_64;
          }
          fVar12 = local_40 - *(float *)(local_68 + iVar11 * 0xc);
          fVar13 = local_38 - *(float *)((int)(local_68 + iVar11 * 0xc) + 8);
          if ((int)ALBW_AS_U32((fVar12 * fVar12 + fVar13 * fVar13)) <= iVar9) goto LAB_003a01dc;
          iVar7 = iVar7 + 1;
        } while (iVar7 != local_5c);
      }
      local_32c = local_40;
      local_324 = local_38;
      local_328 = fVar15;
      piVar4 = func_004C4AF4(*DAT_003a01f4,&local_330,0);
      if ((piVar4 != (int *)0x0) &&
         (*(int *)(param_1 + 800 + iVar10 * 4) = piVar4[0xb3], local_5c < local_64)) {
        iVar7 = local_5c + local_60;
        if (local_64 <= iVar7) {
          iVar7 = iVar7 - local_64;
        }
        pfVar5 = (float *)(local_68 + iVar7 * 0xc);
        *pfVar5 = local_40;
        pfVar5[1] = local_3c;
        pfVar5[2] = local_38;
        local_5c = local_5c + 1;
      }
    }
LAB_003a01dc:
    iVar10 = iVar10 + 1;
    if (iVar10 == 2) {
      return;
    }
  } while( true );
}

