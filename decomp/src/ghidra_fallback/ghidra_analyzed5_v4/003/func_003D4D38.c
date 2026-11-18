#include "ghidra_types.h"

extern int func_003D5148(int param_1,short *param_2);
extern int func_003D55B4(int param_1,int param_2,int param_3,int param_4);
extern int func_003E63E8(uint *param_1,int param_2,int param_3,int *param_4,uint *param_5,uint *param_6);

// USA 003D4D38 <- EU 003D4D18 (Ghidra, non-matching)

bool func_003D4D38(int *param_1,short *param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((int *)(albw_frame + 0x0))
  local_20[2] = 0xffffffff;
  local_20[3] = 0xffffffff;
  local_20[1] = 0xffffffff;
  func_003E63E8(*(uint **)(*param_1 + 4),(int)param_2,1,local_20,(uint *)(local_20 + 2),
                (uint *)(local_20 + 1));
  if (0 < local_20[0]) {
    iVar1 = func_003D55B4((int)*param_2,(int)(short)param_1[2],(int)(short)param_1[1],
                          (int)*(short *)((int)param_1 + 6));
    *param_2 = (short)iVar1;
    *(short *)(param_1 + 2) = (short)iVar1;
    iVar1 = func_003D55B4((int)param_2[1],(int)*(short *)((int)param_1 + 10),(int)(short)param_1[1],
                          (int)*(short *)((int)param_1 + 6));
    param_2[1] = (short)iVar1;
    *(short *)((int)param_1 + 10) = (short)iVar1;
    iVar1 = func_003D55B4((int)param_2[2],(int)(short)param_1[3],(int)(short)param_1[1],
                          (int)*(short *)((int)param_1 + 6));
    param_2[2] = (short)iVar1;
    *(short *)(param_1 + 3) = (short)iVar1;
    func_003D5148((int)param_1,param_2);
  }
  return 0 < local_20[0];
}

