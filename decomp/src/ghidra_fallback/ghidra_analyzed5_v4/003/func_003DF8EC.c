#include "ghidra_types.h"

extern int func_00104338(uint param_1,int param_2);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);
extern int func_003D2948(undefined2 param_1,undefined1 *param_2);
extern int func_003D29AC(undefined4 param_1,undefined4 param_2,int param_3);
extern int func_003D2B18(int param_1,int param_2,int param_3);
extern int func_003D2FF8(undefined2 param_1,undefined2 *param_2);
extern uint DAT_003df9bc;

// USA 003DF8EC <- EU 003DF8CC (Ghidra, non-matching)
// GLOBAL DAT_003df9bc uint

void func_003DF8EC(int *param_1,int param_2)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((undefined2 *)(albw_frame + 0x0))
  #define local_1c ((short *)(albw_frame + 0x4))
  #define local_18 ((char *)(albw_frame + 0x8))
  if (param_2 == 0) {
    local_20[0] = 1;
  }
  else {
    local_20[0] = 3;
  }
  func_003D29AC(2,local_20,4);
  while( true ) {
    local_1c[0] = 0;
    func_003D2948(0,local_18);
    if (local_18[0] != '\0') {
      func_003D2FF8(0,local_1c);
    }
    if (local_1c[0] == 1) break;
    func_00104338(DAT_003df9bc,0);
  }
  if (param_2 != 0) {
    func_001163A0((uint *)(param_1 + 6),(uint *)param_1[0x42a],0x1080);
  }
  func_0010C0C0(param_1 + 2);
  *(undefined1 *)(param_1 + 0x4c6) = 0;
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  func_003D2B18(*param_1,2,2);
  software_interrupt(0x23);
  param_1[1] = 0;
  func_0010C160(param_1 + 2);
  param_1[4] = -1;
  return;
}

