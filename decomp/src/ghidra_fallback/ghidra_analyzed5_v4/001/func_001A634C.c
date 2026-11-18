#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004F4A68();
extern int func_00520FC0(void);
extern undefined8 func_0058A474(undefined4 param_1,uint param_2);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern float DAT_001a65b4;
extern int DAT_001a65b8;
extern int *DAT_001a65bc;
extern uint DAT_001a65c0;
extern undefined4 *DAT_001a65c4;
extern float DAT_001a65c8;
extern int DAT_001a65cc;
extern undefined4 DAT_001a65d0;
extern int DAT_001a65d4;

// USA 001A634C <- EU 001A634C (Ghidra, non-matching)
// GLOBAL DAT_001a65b4 float
// GLOBAL DAT_001a65b8 int
// GLOBAL DAT_001a65bc int *
// GLOBAL DAT_001a65c0 uint
// GLOBAL DAT_001a65c4 undefined4 *
// GLOBAL DAT_001a65c8 float
// GLOBAL DAT_001a65cc int
// GLOBAL DAT_001a65d0 undefined4
// GLOBAL DAT_001a65d4 int

undefined4 func_001A634C(int param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint in_fpscr;
  uint uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 uVar15;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define local_30 ((int *)(albw_frame + 0x10))
  fVar12 = *(float *)(param_2 + 8);
  uVar7 = in_fpscr & 0xfffffff | (uint)(fVar12 < DAT_001a65b4) << 0x1f |
          (uint)(fVar12 == DAT_001a65b4) << 0x1e;
  uVar11 = uVar7 | (uint)(NAN(fVar12) || NAN(DAT_001a65b4)) << 0x1c;
  bVar1 = (byte)(uVar7 >> 0x18);
  if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(uVar11 >> 0x1c) & 1)) {
    fVar12 = -fVar12;
  }
  if (DAT_001a65b8 <= (int)ALBW_AS_U32(fVar12)) goto LAB_001a659c;
  fVar12 = DAT_001a65b4;
  iVar3 = func_0068C690((float *)(param_2 + 4));
  iVar9 = *(int *)(param_1 + 1000);
  iVar10 = iVar9 + -0x80000000;
  local_34 = iVar10 - iVar3;
  iVar4 = func_0058E2B8(&local_34);
  if ((*(char *)(param_1 + 0x94f) != '\0') || (*DAT_001a65bc <= iVar4)) goto LAB_001a659c;
  pfVar5 = (float *)func_00520FC0();
  func_00115C70(&local_40,pfVar5,(float *)(param_1 + 0x3d0));
  uVar7 = *(int *)(param_1 + 1000) + 0x20000000U >> 0x1e;
  iVar4 = func_0068C690(&local_40);
  uVar8 = iVar4 + 0x20000000U >> 0x1e;
  *(undefined1 *)(param_1 + 0x94f) = 1;
  local_30[0] = *(int *)(param_1 + 1000) - *(int *)(param_1 + 0x948);
  uVar6 = func_0058E2B8(local_30);
  if (DAT_001a65c0 <= uVar6) goto LAB_001a659c;
  if (*(char *)(param_1 + 0x8c0) != '\x02') {
    uVar15 = func_0058A474(param_1,0x46);
    puVar2 = DAT_001a65c4;
    if ((int)uVar15 == 0) {
      func_00115C70(&local_40,(float *)(param_1 + 0x91c),(float *)(param_1 + 0x3d0));
      iVar3 = func_0068C690(&local_40);
      *(int *)(param_1 + 0x948) = iVar3;
    }
    else {
      *(int *)(param_1 + 0x948) = iVar10;
      uVar7 = func_00111A64((uint *)*puVar2);
      *(int *)(param_1 + 0x948) =
           ((int)((ulonglong)uVar7 * 0x5a >> 0x20) + -0x2d) * DAT_001a65c0 +
           *(int *)(param_1 + 0x948);
    }
    goto LAB_001a659c;
  }
  if ((uVar7 == uVar8) || ((uVar8 != 1 & uVar7) == 0)) {
    if (iVar3 + 0x20000000U >> 0x1e == iVar9 + 0xa0000000U >> 0x1e) {
      uVar13 = *(undefined4 *)(param_1 + 1000);
      if ((uVar7 & 2) == 0) {
        fVar14 = (float)VectorUnsignedToFloat(uVar13,(byte)(uVar11 >> 0x15) & 3);
        if ((int)ALBW_AS_U32((fVar14 * DAT_001a65c8)) < DAT_001a65d4) {
          uVar8 = 1;
        }
        else {
          uVar8 = 3;
        }
      }
      else {
        fVar14 = (float)VectorUnsignedToFloat(uVar13,(byte)(uVar11 >> 0x15) & 3);
        if (((int)ALBW_AS_U32((fVar14 * DAT_001a65c8)) < DAT_001a65cc) &&
           (fVar14 = (float)VectorUnsignedToFloat(uVar13,(byte)(uVar11 >> 0x15) & 3),
           DAT_001a65cc + 0xd30000 < (int)ALBW_AS_U32((fVar14 * DAT_001a65c8)))) {
          uVar8 = 2;
        }
        else {
          uVar8 = 0;
        }
      }
      goto LAB_001a6518;
    }
  }
  else {
LAB_001a6518:
    *(uint *)(param_1 + 0x948) = uVar8 << 0x1e;
  }
  local_38 = DAT_001a65d0;
  local_40 = fVar12;
  local_3c = fVar12;
  func_004D7F70(&local_40,iVar3 + 0x20000000U & 0xc0000000);
  func_00115C54((float *)(param_1 + 0x91c),(float *)(param_1 + 0x3d0),&local_40);
LAB_001a659c:
  return func_004F4A68(param_1,param_2);
}

