#include "ghidra_types.h"

extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065A0A8(undefined4 *param_1,undefined1 param_2);
extern undefined DAT_0019c518;
extern int DAT_0019c534;
extern int *DAT_0019c538;
extern char s_SE_S_WARP_FLOOR_APPEAR_0019c51c[];

// USA 0019C4B0 <- EU 0019C4B0 (Ghidra, non-matching)
// GLOBAL DAT_0019c518 undefined
// GLOBAL DAT_0019c534 int
// GLOBAL DAT_0019c538 int *
// GLOBAL s_SE_S_WARP_FLOOR_APPEAR_0019c51c string

void func_0019C4B0(int param_1)

{
  bool bVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define aiStack_10 ((int *)(albw_frame + 0x10))
  bVar1 = func_00588BF0(param_1,0);
  if (bVar1) {
    if (*(int *)(param_1 + 0x344) != 0) {
      func_004A1B9C(aiStack_10,*(int *)(param_1 + 0x344),(uint *)&DAT_0019c518);
    }
    func_0065A0A8((undefined4 *)(param_1 + 0x420),1);
    local_14 = s_SE_S_WARP_FLOOR_APPEAR_0019c51c;
    local_18 = DAT_0019c534;
    func_00587F74(*DAT_0019c538,&local_18,0);
  }
  return;
}

