#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001E4090(int param_1,undefined4 param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_003059ec;
extern int DAT_003059f0;
extern char s_SE_DoorHouse_CLOSE_00305a10[];
extern char s_SE_DoorHyruleSmall_CLOSE_003059f4[];

// USA 0030598C <- EU 00305968 (Ghidra, non-matching)
// GLOBAL DAT_003059ec int *
// GLOBAL DAT_003059f0 int
// GLOBAL s_SE_DoorHouse_CLOSE_00305a10 string
// GLOBAL s_SE_DoorHyruleSmall_CLOSE_003059f4 string

undefined4 func_0030598C(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  *(undefined1 *)(param_1 + 0x12a) = 2;
  iVar1 = func_00588BE4((int)param_1);
  local_10 = DAT_003059f0;
  if (iVar1 == *DAT_003059ec) {
    local_c = s_SE_DoorHyruleSmall_CLOSE_003059f4;
    func_00150A84(param_1,&local_10,0);
  }
  else {
    local_c = s_SE_DoorHouse_CLOSE_00305a10;
    func_00150A84(param_1,&local_10,0);
  }
  *(undefined1 *)((int)param_1 + 0x4aa) = 1;
  return func_001E4090((int)param_1,1);
}

