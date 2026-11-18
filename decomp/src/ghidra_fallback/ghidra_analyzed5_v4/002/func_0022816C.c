#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined4 DAT_00228228;
extern int DAT_0022822c;
extern float DAT_00228230;
extern int DAT_00228234;

// USA 0022816C <- EU 0022816C (Ghidra, non-matching)
// GLOBAL DAT_00228228 undefined4
// GLOBAL DAT_0022822c int
// GLOBAL DAT_00228230 float
// GLOBAL DAT_00228234 int

void func_0022816C(int *param_1)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  local_10 = DAT_0022822c;
  if (*(char *)((int)param_1 + 0x749) != '\0') {
    param_1[0x1a9] = param_1[0x1aa];
    *(undefined1 *)((int)param_1 + 0x749) = 0;
    local_c = DAT_00228228;
    func_00150A84(param_1,&local_10,0);
  }
  fVar1 = DAT_00228230;
  uVar2 = param_1[0x1a9];
  pfVar3 = (float *)(DAT_00228234 + (uVar2 >> 0x18) * 0x10);
  fVar4 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  param_1[0xf4] =
       (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf4]) +
            (*pfVar3 + pfVar3[1] * fVar4 * DAT_00228230) * ALBW_AS_F32(param_1[0x1c0])));
  param_1[0xf6] =
       (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf6]) + (pfVar3[2] + pfVar3[3] * fVar5 * fVar1) * ALBW_AS_F32(param_1[0x1c0])))
  ;
  return;
}

