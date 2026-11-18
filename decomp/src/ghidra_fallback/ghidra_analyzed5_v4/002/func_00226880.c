#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00223FD0(int param_1,short param_2);
extern int func_002B1510(int param_1,float *param_2,float fparam_0);
extern undefined4 DAT_00226980;
extern int DAT_00226984;
extern float DAT_00226988;
extern int DAT_0022698c;
extern float DAT_00226990;
extern float DAT_00226994;
extern float DAT_00226998;

// USA 00226880 <- EU 00226880 (Ghidra, non-matching)
// GLOBAL DAT_00226980 undefined4
// GLOBAL DAT_00226984 int
// GLOBAL DAT_00226988 float
// GLOBAL DAT_0022698c int
// GLOBAL DAT_00226990 float
// GLOBAL DAT_00226994 float
// GLOBAL DAT_00226998 float

undefined4 func_00226880(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  uint in_fpscr;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_10 (*(int *)(albw_frame + 0x10))
  #define local_c (*(undefined4 *)(albw_frame + 0x14))
  if ((char)param_1[0x11b] == '\x05') {
    iVar2 = func_00223FD0((int)param_1,(ushort)*(byte *)(param_1 + 0x1d2));
    uVar1 = 0;
    if (iVar2 != 0) {
      local_c = DAT_00226980;
      local_10 = DAT_00226984;
      func_00150A84(param_1,&local_10,0);
      pfVar3 = (float *)(DAT_0022698c + ((uint)param_1[0x1b4] >> 0x18) * 0x10);
      fVar4 = (float)VectorUnsignedToFloat(param_1[0x1b4] & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      local_20 = ALBW_AS_F32(param_1[0xf4]) - (*pfVar3 + pfVar3[1] * fVar4 * DAT_00226988) * DAT_00226990;
      local_1c = ALBW_AS_F32(param_1[0xf5]) + DAT_00226994;
      iVar2 = DAT_0022698c + ((uint)param_1[0x1b4] >> 0x18) * 0x10;
      fVar4 = (float)VectorUnsignedToFloat(param_1[0x1b4] & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      local_18 = ALBW_AS_F32(param_1[0xf6]) -
                 (*(float *)(iVar2 + 8) + *(float *)(iVar2 + 0xc) * fVar4 * DAT_00226988) *
                 DAT_00226990;
      func_002B1510((int)param_1,&local_20,DAT_00226998);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

