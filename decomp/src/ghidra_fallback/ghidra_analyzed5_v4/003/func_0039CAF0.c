#include "ghidra_types.h"

extern int func_00151150(int param_1,float *param_2);
extern int func_001512B4(int param_1,float *param_2);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern float DAT_0039cb58;
extern undefined4 DAT_0039cb5c;

// USA 0039CAF0 <- EU 0039CACC (Ghidra, non-matching)
// GLOBAL DAT_0039cb58 float
// GLOBAL DAT_0039cb5c undefined4

void func_0039CAF0(int param_1)

{
  bool bVar1;
  bool bVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  bVar1 = false;
  if (*(float *)(param_1 + 0x480) == DAT_0039cb58) {
    bVar1 = *(float *)(param_1 + 0x484) == DAT_0039cb58;
  }
  bVar2 = false;
  if (bVar1) {
    bVar2 = *(float *)(param_1 + 0x488) == DAT_0039cb58;
  }
  if (!bVar2) {
    func_004D8AEC((float *)(param_1 + 0x48c),*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
    func_001512B4(*(int *)(param_1 + 0x43c),(float *)(param_1 + 0x3d0));
    local_18 = *(float *)(param_1 + 0x480);
    uStack_10 = *(undefined4 *)(param_1 + 0x488);
    uStack_14 = DAT_0039cb5c;
    func_00151150(*(int *)(param_1 + 0x43c),&local_18);
  }
  return;
}

