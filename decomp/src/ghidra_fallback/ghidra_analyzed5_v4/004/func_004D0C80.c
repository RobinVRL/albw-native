#include "ghidra_types.h"

extern int func_003413DC(int param_1,float *param_2,int *param_3);
extern int func_004D0F4C(int param_1);
extern int func_004D1064(int param_1,float fparam_0);
extern int func_00588BF0(int param_1,int param_2);
extern float DAT_004d0e80;
extern float DAT_004d0e84;
extern int *DAT_004d0e88;

// USA 004D0C80 <- EU 004D0C58 (Ghidra, non-matching)
// GLOBAL DAT_004d0e80 float
// GLOBAL DAT_004d0e84 float
// GLOBAL DAT_004d0e88 int *

void func_004D0C80(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint in_fpscr;
  float fparam_0;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 ((int *)(albw_frame + 0x8))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  fparam_0 = DAT_004d0e84;
  fVar5 = DAT_004d0e80;
  cVar1 = *(char *)(param_1 + 0x4a0);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x498),
                                         (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x484) = -(fVar4 * *(float *)(param_1 + 0x490));
      iVar3 = *(int *)(param_1 + 0x498) + 1;
      *(int *)(param_1 + 0x498) = iVar3;
      if (iVar3 < *(int *)(param_1 + 0x488)) {
LAB_004d0e6c:
        fVar4 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
        fparam_0 = fparam_0 - fVar4 * *(float *)(param_1 + 0x494);
      }
      else {
        *(undefined1 *)(param_1 + 0x4a0) = 2;
        fparam_0 = fVar5;
      }
    }
    else {
      if (cVar1 == '\x02') {
        *(float *)(param_1 + 0x484) = -*(float *)(param_1 + 0x48c);
        *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_1 + 0x488);
        if (*(char *)(param_1 + 0x4a1) == '\0') {
          bVar2 = func_00588BF0(param_1,0);
          cVar1 = *(char *)(param_1 + 0x4a0);
          if (bVar2) goto joined_r0x004d0ddc;
          goto joined_r0x004d0de8;
        }
        bVar2 = func_00588BF0(param_1,0);
        cVar1 = *(char *)(param_1 + 0x4a0);
        goto joined_r0x004d0da0;
      }
      if (cVar1 != '\x03') goto LAB_004d0dec;
      fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x498),
                                         (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x484) = -(fVar4 * *(float *)(param_1 + 0x490));
      iVar3 = *(int *)(param_1 + 0x498) + -1;
      *(int *)(param_1 + 0x498) = iVar3;
      if (-1 < iVar3) goto LAB_004d0e6c;
      *(undefined1 *)(param_1 + 0x4a0) = 0;
    }
    func_004D1064(param_1,fparam_0);
    goto LAB_004d0dec;
  }
  *(float *)(param_1 + 0x484) = DAT_004d0e80;
  *(undefined4 *)(param_1 + 0x498) = 0;
  if (*(char *)(param_1 + 0x4a1) == '\0') {
    bVar2 = func_00588BF0(param_1,0);
    cVar1 = *(char *)(param_1 + 0x4a0);
    if (bVar2) goto joined_r0x004d0ddc;
  }
  else {
    bVar2 = func_00588BF0(param_1,0);
    cVar1 = *(char *)(param_1 + 0x4a0);
joined_r0x004d0da0:
    if (!bVar2) {
joined_r0x004d0ddc:
      if (cVar1 == '\x02') {
        *(undefined1 *)(param_1 + 0x4a0) = 3;
      }
      goto LAB_004d0dec;
    }
  }
joined_r0x004d0de8:
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x4a0) = 1;
  }
LAB_004d0dec:
  func_004D0F4C(param_1);
  if (*(char *)(param_1 + 0x4a2) != '\0') {
    local_28 = *(undefined4 *)(param_1 + 0x490);
    local_38[0] = 0;
    local_2c = fVar5;
    local_24 = fVar5;
    func_003413DC(*DAT_004d0e88,&local_2c,local_38);
    *(undefined1 *)(param_1 + 0x4a2) = 0;
  }
  return;
}

