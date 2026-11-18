#include "ghidra_types.h"

extern int func_00111A20(int param_1,undefined4 param_2,uint *param_3);
extern int func_00111C58(int param_1,uint param_2,int param_3,uint *param_4);
extern int DAT_0011139c;

// USA 0011130C <- EU 0011130C (Ghidra, non-matching)
// GLOBAL DAT_0011139c int

void func_0011130C(int param_1,uint param_2,int param_3,undefined4 param_4,...)

{
  _Alignas(8) unsigned char albw_frame[0x170]; /* entry_sp - 0x130 .. entry_sp + 0x40 */
#define stack0x00000000 (*(undefined4 *)(albw_frame + 0x130))
  #define local_130 (*(int *)(albw_frame + 0x0))
  #define local_12c (*(uint * *)(albw_frame + 0x4))
  #define uStack_128 (*(undefined4 *)(albw_frame + 0x8))
  #define local_124 ((undefined1 *)(albw_frame + 0xc))
  #define uStack_25 (*(undefined1 *)(albw_frame + 0x10b))
  if (*(int *)(param_1 + 0x24) != 0) {
    local_12c = (uint *)local_124;
    uStack_128 = 0x100;
    uStack_25 = 0;
    local_124[0] = 0;
    local_130 = DAT_0011139c;
    func_00111A20((int)&local_130,param_4,(uint *)&stack0x00000000);
    (**(code **)(local_130 + 8))(&local_130);
    func_00111C58(*(int *)(param_1 + 0x24),param_2,param_3,local_12c);
  }
  return;
}

