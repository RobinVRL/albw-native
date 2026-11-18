#include "ghidra_types.h"

extern int func_0047FD30(int param_1,int *param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_00583794(int *param_1,int *param_2);
extern int *DAT_0047fe68;
extern int *DAT_0047fe6c;
extern int DAT_0047fe70;

// USA 0047FE10 <- EU 0047FDE8 (Ghidra, non-matching)
// GLOBAL DAT_0047fe68 int *
// GLOBAL DAT_0047fe6c int *
// GLOBAL DAT_0047fe70 int

void func_0047FE10(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define local_6c (*(undefined2 * *)(albw_frame + 0x4))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x8))
  #define local_64 ((undefined2 *)(albw_frame + 0xc))
  #define local_26 (*(undefined2 *)(albw_frame + 0x4a))
  #define local_20 ((int *)(albw_frame + 0x50))
  local_20[3] = 0xffffffff;
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  iVar1 = func_005826A4(*DAT_0047fe6c,local_20,DAT_0047fe68 + -6,DAT_0047fe68);
  if (iVar1 != 0) {
    local_6c = local_64;
    uStack_68 = 0x20;
    local_26 = 0;
    local_70 = DAT_0047fe70;
    local_64[0] = 0;
    func_00583794(local_20,&local_70);
    func_0047FD30(param_1,&local_70);
  }
  return;
}

