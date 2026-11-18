#include "ghidra_types.h"

extern int func_0010BC94(undefined4 *param_1,undefined1 param_2);
extern int func_00296D70(int param_1,uint param_2,int param_3,int param_4,int param_5);
extern int func_00297140(int param_1,int *param_2);
extern int func_004EAA3C(int param_1);
extern int *DAT_00295aa4;
extern int *DAT_00295aa8;
extern int DAT_00295aac;
extern uint DAT_00295ab0;

// USA 002959E4 <- EU 00295A0C (Ghidra, non-matching)
// GLOBAL DAT_00295aa4 int *
// GLOBAL DAT_00295aa8 int *
// GLOBAL DAT_00295aac int
// GLOBAL DAT_00295ab0 uint

/* WARNING: Variable defined which should be unmapped: objStack_18 */

void func_002959E4(int param_1)

{
  char cVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define objStack_18 ((uint *)(albw_frame + 0x8))
  objStack_18[0] = 0;
  func_00296D70(param_1,0x10000,-1,0xf,0);
  piVar2 = DAT_00295aa4;
  func_004EAA3C(*DAT_00295aa4);
  *(uint *)(*piVar2 + 0x60) = *(uint *)(*piVar2 + 0x60) | 4;
  if ((*DAT_00295aa8 == 0) ||
     (cVar1 = *(char *)(*DAT_00295aa8 + 0x18), cVar1 != '\a' && cVar1 != '%')) {
    objStack_18[1] = *(uint *)(DAT_00295aac + 0x20);
    objStack_18[0] = DAT_00295ab0;
    func_00297140(param_1,(int *)objStack_18);
    func_0010BC94((undefined4 *)(param_1 + 0xc4),1);
    *(undefined1 *)(param_1 + 0x1a5) = 0;
  }
  return;
}

