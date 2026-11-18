#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_004490C4(int param_1,uint param_2);
extern int func_005191CC(int param_1,uint *param_2,int param_3);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0058D888(int param_1);
extern float DAT_0044dbe0;
extern int *DAT_0044dbe4;
extern int DAT_0044dc00;
extern char s_SE_S_MAP_PIN_POP_MENU_0044dbe8[];

// USA 0044DB70 <- EU 0044DB48 (Ghidra, non-matching)
// GLOBAL DAT_0044dbe0 float
// GLOBAL DAT_0044dbe4 int *
// GLOBAL DAT_0044dc00 int
// GLOBAL s_SE_S_MAP_PIN_POP_MENU_0044dbe8 string

undefined4 func_0044DB70(int param_1)

{
  float fparam_0;
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define local_18 (*(uint *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x8e) = 5;
  fparam_0 = DAT_0044dbe0;
  *(undefined2 *)(param_1 + 0x8c) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x8c),fparam_0);
  piVar1 = DAT_0044dbe4;
  iVar2 = func_0058D888(*DAT_0044dbe4);
  if (iVar2 != 0) {
    local_18 = *(uint *)(*(int *)(param_1 + 0x11c) + 0x1c);
    uStack_14 = *(undefined4 *)(*(int *)(param_1 + 0x11c) + 0x20);
    func_005191CC(*piVar1,&local_18,(uint)*(byte *)(param_1 + 0x108));
  }
  if (*(int *)(param_1 + 300) != 0) {
    func_004490C4(*(int *)(param_1 + 300),0);
  }
  local_1c = s_SE_S_MAP_PIN_POP_MENU_0044dbe8;
  local_20 = DAT_0044dc00;
  return func_00533078(param_1,&local_20,0);
}

