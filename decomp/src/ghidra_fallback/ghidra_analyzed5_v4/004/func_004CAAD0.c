#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_004C9AFC(int param_1,float *param_2);
extern int func_004CA984(int param_1);
extern int func_00520FC0(void);
extern int func_0066A284(undefined4 *param_1,undefined1 param_2);
extern int DAT_004cab58;
extern char s_SE_Bee_FLY_ATTACK_004cab44[];

// USA 004CAAD0 <- EU 004CAAA8 (Ghidra, non-matching)
// GLOBAL DAT_004cab58 int
// GLOBAL s_SE_Bee_FLY_ATTACK_004cab44 string

undefined4 func_004CAAD0(int param_1)

{
  int iVar1;
  float *pfVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_10 = DAT_004cab58;
  local_c = s_SE_Bee_FLY_ATTACK_004cab44;
  func_001507D8(param_1,&local_10,0);
  iVar1 = func_004CA984(param_1);
  if (iVar1 == 0) {
    if (*(uint *)(param_1 + 0x9c8) < *(uint *)(param_1 + 0x9cc)) {
      *(uint *)(param_1 + 0x9c8) = *(uint *)(param_1 + 0x9c8) + 1;
    }
    else {
      func_0066A284((undefined4 *)(param_1 + 0x8bc),4);
    }
    pfVar2 = (float *)func_00520FC0();
    return func_004C9AFC(param_1,pfVar2);
  }
  return func_0066A284((undefined4 *)(param_1 + 0x8bc),9);
}

