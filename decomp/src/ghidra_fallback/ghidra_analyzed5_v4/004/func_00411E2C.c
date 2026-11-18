#include "ghidra_types.h"

extern int func_004115AC(int *param_1,uint param_2,uint param_3,int *param_4,uint param_5,uint param_6);
extern int func_0041297C(int *param_1,int *param_2);
extern int func_0056C5EC(int param_1,uint *param_2,uint param_3,uint param_4);

// USA 00411E2C <- EU 00411E0C (Ghidra, non-matching)

undefined4 func_00411E2C(int *param_1,int *param_2,uint param_3,int *param_4)

{
  _Alignas(8) unsigned char albw_frame[0x30]; /* entry_sp - 0x30 .. entry_sp + 0x0 */
#define stack0xffffffd0 (*(undefined4 *)(albw_frame + 0x0))
  int iVar1;
  undefined4 uVar2;
  #define in_stack_ffffffd0 (*(uint *)(albw_frame + 0x0)) /* V4: frame slot (callee-filled) */
  #define in_stack_ffffffd4 (*(uint *)(albw_frame + 0x4)) /* V4: frame slot (callee-filled) */
  #define aiStack_18 ((int *)(albw_frame + 0x18))
  if (param_2 != (int *)0x0) {
    func_0041297C(aiStack_18,param_2);
    iVar1 = func_0056C5EC((int)aiStack_18,(uint *)&stack0xffffffd0,param_3,0);
    uVar2 = 0;
    if ((iVar1 != 0) &&
       (iVar1 = func_004115AC(param_1,in_stack_ffffffd0,in_stack_ffffffd4,param_4,8,0), uVar2 = 0,
       iVar1 != 0)) {
      uVar2 = 1;
    }
    return uVar2;
  }
  return 0;
}

