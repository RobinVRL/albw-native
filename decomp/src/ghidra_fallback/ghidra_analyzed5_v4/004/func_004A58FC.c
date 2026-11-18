#include "ghidra_types.h"

extern int func_00231524(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0066F90C(undefined4 *param_1,undefined1 param_2);
extern float DAT_004a5988;
extern int DAT_004a5998;
extern float DAT_004a599c;
extern char s_SE_S_SELECT_004a598c[];

// USA 004A58FC <- EU 004A58D4 (Ghidra, non-matching)
// GLOBAL DAT_004a5988 float
// GLOBAL DAT_004a5998 int
// GLOBAL DAT_004a599c float
// GLOBAL s_SE_S_SELECT_004a598c string

undefined4 func_004A58FC(int param_1)

{
  float fparam_0;
  ushort *puVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if (*(char *)(param_1 + 0x88) == '\0') {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x62) = 0;
    fparam_0 = DAT_004a599c;
    *(undefined2 *)(param_1 + 0x60) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x60),fparam_0);
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x62) = 2;
    *(undefined2 *)(param_1 + 0x60) = 0;
    func_00231524(param_1 + 0x60);
    func_0066F90C((undefined4 *)(param_1 + 0x20),2);
  }
  func_002317C0((undefined2 *)(param_1 + 0x6c),DAT_004a5988);
  local_10 = DAT_004a5998;
  puVar1 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  *puVar1 = *puVar1 | 2;
  local_c = s_SE_S_SELECT_004a598c;
  return func_00533078(param_1,&local_10,0);
}

