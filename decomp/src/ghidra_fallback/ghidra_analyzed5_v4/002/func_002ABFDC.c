#include "ghidra_types.h"

extern int func_002ACD14(undefined4 *param_1,int param_2,int param_3);
extern int func_002B1470(undefined4 *param_1);
extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_004FD0B4(int param_1);
extern int func_004FD268(int param_1);
extern int func_006624F4(undefined4 *param_1,undefined1 param_2);
extern float DAT_002ac238;
extern int DAT_002ac23c;
extern int *DAT_002ac240;

// USA 002ABFDC <- EU 002ABFB8 (Ghidra, non-matching)
// GLOBAL DAT_002ac238 float
// GLOBAL DAT_002ac23c int
// GLOBAL DAT_002ac240 int *

undefined4 func_002ABFDC(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((float *)(albw_frame + 0x8))
  iVar3 = param_1[0xd];
  cVar1 = *(char *)(iVar3 + 0x7fc);
  if ((((cVar1 == '\0' || cVar1 == '\x05') || (cVar1 == '\x03' || cVar1 == '\x04')) &&
      (*(char *)(iVar3 + 0x848) == '\0')) && (0 < *(short *)(iVar3 + 0x508))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  *(short *)(param_1 + 0xb0) = *(short *)(param_1 + 0xb0) + 1;
  iVar3 = func_002B1470(param_1);
  fVar5 = DAT_002ac238;
  if (iVar3 != 0) {
    return 0;
  }
  if (((*(char *)(param_1[0xd] + 0x7fc) == '\0') || (*(char *)(param_1[0xd] + 0x7fc) == '\x05')) &&
     (-1 < (int)((uint)*(ushort *)(param_1 + 0xe) << 0x18))) {
    *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) | 0x80;
    local_18[0] = fVar5;
    iVar3 = func_00392E48((undefined4 *)(param_1[0xd] + 0x3d0),0,local_18,0);
    if (iVar3 != 5) {
      if (iVar3 != 4) {
LAB_002ac0bc:
        param_1[0xb] = 0;
        param_1[0xc] = ALBW_AS_U32(fVar5);
        param_1[10] = 0;
        return func_002ACD14(param_1,1,0);
      }
      fVar4 = local_18[0] - *(float *)(param_1[0xd] + 0x3d4);
      if (fVar4 <= fVar5) {
        fVar4 = -fVar4;
      }
      if (DAT_002ac23c <= (int)ALBW_AS_U32(fVar4)) goto LAB_002ac0bc;
    }
  }
  if ((uint)param_1[0xa4] <= (uint)param_1[0xa3]) {
    *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) | 2;
  }
  if ((uint)param_1[0xa6] < (uint)param_1[0xa7]) {
    if (*(char *)((int)param_1 + 5) != '\x12') goto LAB_002ac150;
    if (*(int *)(*DAT_002ac240 + 0x10) << 0x1e < 0) {
      func_004FD0B4(param_1[0xd]);
      goto LAB_002ac150;
    }
  }
  func_004FD268(param_1[0xd]);
LAB_002ac150:
  if ((bVar2) && ((uint)param_1[0xa1] <= (uint)param_1[0xa0])) {
    param_1[0xb] = 0;
    param_1[0xc] = ALBW_AS_U32(fVar5);
    param_1[10] = 0;
    if (*(short *)(param_1[0xd] + 0x508) < 1) {
      return func_006624F4(param_1,0x1f);
    }
  }
  if ((uint)param_1[0xa0] < (uint)param_1[0xa1]) {
    param_1[0xa0] = param_1[0xa0] + 1;
  }
  if ((uint)param_1[0xa3] < (uint)param_1[0xa4]) {
    param_1[0xa3] = param_1[0xa3] + 1;
  }
  if ((uint)param_1[0xa6] < (uint)param_1[0xa7]) {
    param_1[0xa6] = param_1[0xa6] + 1;
  }
  if ((uint)param_1[10] < (uint)param_1[0xb]) {
    param_1[10] = param_1[10] + 1;
  }
  if (*(char *)(param_1[0xd] + 0x7fc) != '\x05') {
    return func_002ACD14(param_1,0,1);
  }
  return func_002ACD14(param_1,0,0);
}

