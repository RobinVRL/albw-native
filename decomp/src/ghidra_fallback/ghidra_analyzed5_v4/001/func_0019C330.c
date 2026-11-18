#include "ghidra_types.h"

extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern undefined DAT_0019c358;

// USA 0019C330 <- EU 0019C330 (Ghidra, non-matching)
// GLOBAL DAT_0019c358 undefined

undefined4 func_0019C330(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define aiStack_10 ((int *)(albw_frame + 0x0))
  if (*(int *)(param_1 + 0x344) == 0) {
    return 0;
  }
  return func_004A1B9C(aiStack_10,*(int *)(param_1 + 0x344),(uint *)&DAT_0019c358);
}

