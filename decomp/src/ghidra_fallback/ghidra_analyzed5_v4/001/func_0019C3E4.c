#include "ghidra_types.h"

extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern float func_00521238(int param_1);
extern undefined DAT_0019c41c;

// USA 0019C3E4 <- EU 0019C3E4 (Ghidra, non-matching)
// GLOBAL DAT_0019c41c undefined

void func_0019C3E4(int param_1)

{
  float fVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define aiStack_10 ((int *)(albw_frame + 0x0))
  fVar1 = func_00521238(param_1);
  if (((int)ALBW_AS_U32(fVar1) < 0x3f800000) && (*(int *)(param_1 + 0x344) != 0)) {
    func_004A1B9C(aiStack_10,*(int *)(param_1 + 0x344),(uint *)&DAT_0019c41c);
  }
  return;
}

