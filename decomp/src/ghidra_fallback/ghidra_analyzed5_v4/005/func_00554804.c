#include "ghidra_types.h"

extern int func_005549BC(int param_1,int param_2);
extern int func_0058E2B8(int *param_1);
extern float DAT_005548a8;
extern int *DAT_005548ac;
extern float DAT_005548b0;
extern int DAT_005548b4;
extern uint DAT_005548b8;
extern float DAT_005548bc;
extern float DAT_005548c0;

// USA 00554804 <- EU 005547DC (Ghidra, non-matching)
// GLOBAL DAT_005548a8 float
// GLOBAL DAT_005548ac int *
// GLOBAL DAT_005548b0 float
// GLOBAL DAT_005548b4 int
// GLOBAL DAT_005548b8 uint
// GLOBAL DAT_005548bc float
// GLOBAL DAT_005548c0 float

float func_00554804(int param_1,int param_2,int param_3,float fparam_0)

{
  uint uVar1;
  int iVar2;
  uint in_fpscr;
  uint uVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((int *)(albw_frame + 0x8))
  uVar3 = in_fpscr & 0xfffffff | (uint)(fparam_0 == DAT_005548a8) << 0x1e;
  if (SUB41(uVar3 >> 0x1e,0)) {
    fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xc),(byte)(uVar3 >> 0x15) & 3);
  }
  else {
    if (param_2 == 0 || param_3 == 0) {
      iVar5 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar5 = func_005549BC(param_1,param_3);
      iVar2 = *(int *)(param_1 + 0xc);
      local_18[0] = **(int **)(*DAT_005548ac + 0x24) - iVar5;
      fVar4 = DAT_005548b0;
      uVar1 = func_0058E2B8(local_18);
      if ((DAT_005548b8 <= DAT_005548b4 + uVar1) && (fVar4 = DAT_005548bc, 0x3fffffff < uVar1)) {
        fVar4 = DAT_005548c0;
      }
      fVar6 = (float)VectorSignedToFloat(iVar2 - iVar5,(byte)(uVar3 >> 0x15) & 3);
      iVar5 = *(int *)(param_1 + 0xc) - (int)(fVar6 * fparam_0 * fVar4);
    }
    fVar4 = (float)VectorSignedToFloat(iVar5,(byte)(uVar3 >> 0x15) & 3);
  }
  return fVar4;
}

