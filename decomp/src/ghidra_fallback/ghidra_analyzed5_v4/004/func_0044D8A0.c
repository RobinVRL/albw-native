#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00446A68(int param_1,float *param_2,int param_3);
extern int func_00448700(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern float DAT_0044d970;
extern int DAT_0044d974;
extern undefined4 DAT_0044d9a8;
extern char s_SE_S_MAP_PIN_STICK_0044d994[];
extern char s_SE_S_MAP_PIN_STICK_FIELD_0044d978[];

// USA 0044D8A0 <- EU 0044D878 (Ghidra, non-matching)
// GLOBAL DAT_0044d970 float
// GLOBAL DAT_0044d974 int
// GLOBAL DAT_0044d9a8 undefined4
// GLOBAL s_SE_S_MAP_PIN_STICK_0044d994 string
// GLOBAL s_SE_S_MAP_PIN_STICK_FIELD_0044d978 string

undefined4 func_0044D8A0(int param_1)

{
  float fparam_0;
  int iVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  func_002313DC(param_1 + 0xa4);
  iVar1 = DAT_0044d974;
  fparam_0 = DAT_0044d970;
  if (*(char *)(*(int *)(param_1 + 300) + 0x15c) == '\x02') {
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x76) = 1;
    *(undefined2 *)(param_1 + 0x74) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x74),fparam_0);
    local_14 = s_SE_S_MAP_PIN_STICK_0044d994;
    local_18 = iVar1;
    func_00533078(param_1,&local_18,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x76) = 2;
    *(undefined2 *)(param_1 + 0x74) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x74),fparam_0);
    local_14 = s_SE_S_MAP_PIN_STICK_FIELD_0044d978;
    local_18 = iVar1;
    func_00533078(param_1,&local_18,0);
  }
  *(undefined1 *)(param_1 + 0xd4) = 1;
  func_00446A68(*(int *)(param_1 + 300),(float *)(param_1 + 0xe8),(uint)*(byte *)(param_1 + 0x108));
  uVar2 = DAT_0044d9a8;
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(param_1 + 0x104) = uVar2;
  if (*(int *)(param_1 + 300) != 0) {
    return func_00448700(*(int *)(param_1 + 300));
  }
  return 0;
}

