#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_004C9AFC(int param_1,float *param_2);
extern int func_004CA984(int param_1);
extern int func_004CB500(int param_1);
extern int func_0066A284(undefined4 *param_1,undefined1 param_2);
extern int DAT_004cb6ac;
extern undefined4 DAT_004cb6b0;
extern undefined4 DAT_004cb6b4;
extern float DAT_004cb6b8;
extern char s_SE_Bee_FLY_ATTACK_004cb698[];

// USA 004CB598 <- EU 004CB570 (Ghidra, non-matching)
// GLOBAL DAT_004cb6ac int
// GLOBAL DAT_004cb6b0 undefined4
// GLOBAL DAT_004cb6b4 undefined4
// GLOBAL DAT_004cb6b8 float
// GLOBAL s_SE_Bee_FLY_ATTACK_004cb698 string

undefined4 func_004CB598(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_10 = DAT_004cb6ac;
  local_c = s_SE_Bee_FLY_ATTACK_004cb698;
  func_001507D8(param_1,&local_10,0);
  iVar2 = func_004CA984(param_1);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x954) == 0) {
      if (*(uint *)(param_1 + 0x9c8) < *(uint *)(param_1 + 0x9cc)) {
        *(uint *)(param_1 + 0x9c8) = *(uint *)(param_1 + 0x9c8) + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x3e0) = DAT_004cb6b0;
        uVar1 = DAT_004cb6b4;
        *(undefined4 *)(param_1 + 0x9cc) = 5;
        *(undefined4 *)(param_1 + 0x9d0) = uVar1;
        *(undefined4 *)(param_1 + 0x9c8) = 0;
        *(undefined4 *)(param_1 + 0x954) = 1;
      }
    }
    else if (*(int *)(param_1 + 0x954) == 1) {
      fVar3 = *(float *)(param_1 + 0x3e4) * DAT_004cb6b8;
      *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x3dc) * DAT_004cb6b8;
      *(float *)(param_1 + 0x3e4) = fVar3;
      if ((*(uint *)(param_1 + 0x9cc) <= *(uint *)(param_1 + 0x9c8)) ||
         (*(uint *)(param_1 + 0x9c8) = *(uint *)(param_1 + 0x9c8) + 1,
         *(char *)(param_1 + 0x991) == ',')) {
        func_004CB500(param_1);
      }
    }
    return func_004C9AFC(param_1,(float *)(param_1 + 0x8e8));
  }
  return func_0066A284((undefined4 *)(param_1 + 0x8bc),9);
}

