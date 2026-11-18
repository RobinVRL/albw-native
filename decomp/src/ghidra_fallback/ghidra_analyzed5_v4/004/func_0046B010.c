#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0046A7AC(int param_1,int *param_2);
extern float DAT_0046b0bc;
extern undefined DAT_0046b0c0;
extern int DAT_0046b0c8;
extern char s_Continue_0046b0cc[];

// USA 0046B010 <- EU 0046AFE8 (Ghidra, non-matching)
// GLOBAL DAT_0046b0bc float
// GLOBAL DAT_0046b0c0 undefined
// GLOBAL DAT_0046b0c8 int
// GLOBAL s_Continue_0046b0cc string

void func_0046B010(int param_1)

{
  int iVar1;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  fparam_0 = DAT_0046b0bc;
  *(undefined2 *)(param_1 + 0x74) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x74),fparam_0);
  iVar1 = DAT_0046b0c8;
  local_1c = &DAT_0046b0c0;
  local_20 = DAT_0046b0c8;
  func_0046A7AC(*(int *)(param_1 + 0xbc),&local_20);
  local_20 = iVar1;
  local_1c = s_Continue_0046b0cc;
  func_0046A7AC(*(int *)(param_1 + 0xc0),&local_20);
  iVar1 = *(int *)(param_1 + 0xbc);
  if (*(char *)(iVar1 + 0x48) != '\0') {
    *(undefined2 *)(iVar1 + 0x20) = 2;
    func_002317C0((undefined2 *)(iVar1 + 0x20),fparam_0);
    *(undefined1 *)(iVar1 + 0x48) = 0;
  }
  func_00231448(iVar1 + 0x2c);
  *(undefined1 *)(iVar1 + 0x49) = 0;
  iVar1 = *(int *)(param_1 + 0xc0);
  if (*(char *)(iVar1 + 0x48) == '\0') {
    *(undefined2 *)(iVar1 + 0x20) = 0;
    func_002317C0((undefined2 *)(iVar1 + 0x20),fparam_0);
    *(undefined1 *)(iVar1 + 0x48) = 1;
  }
  func_002317C0((undefined2 *)(iVar1 + 0x2c),fparam_0);
  *(undefined1 *)(iVar1 + 0x49) = 0;
  return;
}

