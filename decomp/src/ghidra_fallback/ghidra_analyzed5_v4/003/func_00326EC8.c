#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0019B04C(uint param_1);
extern int func_001CD204(undefined4 *param_1,uint param_2,undefined4 param_3,int param_4);
extern int func_001D6FD0(undefined4 *param_1,uint param_2,int param_3,int *param_4,int param_5);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_00324964(int param_1);
extern int func_003249B4(int param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_005238E4(int param_1,uint param_2);
extern int func_00581D60(int param_1);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_0058DA04(int param_1);
extern undefined DAT_00000005;
extern undefined DAT_00000006;
extern undefined DAT_0000002d;
extern undefined DAT_0000003c;
extern int *DAT_00327154;
extern int *DAT_00327158;
extern float DAT_0032715c;
extern int *DAT_00327160;
extern undefined4 DAT_00327164;
extern undefined4 DAT_00327168;
extern uint *DAT_0032716c;
extern int *DAT_00327170;
extern undefined4 DAT_00327174;
extern undefined4 DAT_00327178;
extern int *DAT_0032717c;

// USA 00326EC8 <- EU 00326EA4 (Ghidra, non-matching)
// GLOBAL DAT_00000005 undefined
// GLOBAL DAT_00000006 undefined
// GLOBAL DAT_0000002d undefined
// GLOBAL DAT_0000003c undefined
// GLOBAL DAT_00327154 int *
// GLOBAL DAT_00327158 int *
// GLOBAL DAT_0032715c float
// GLOBAL DAT_00327160 int *
// GLOBAL DAT_00327164 undefined4
// GLOBAL DAT_00327168 undefined4
// GLOBAL DAT_0032716c uint *
// GLOBAL DAT_00327170 int *
// GLOBAL DAT_00327174 undefined4
// GLOBAL DAT_00327178 undefined4
// GLOBAL DAT_0032717c int *
// GLOBAL EXT_00000008 undefined

undefined4 func_00326EC8(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x2e0]; /* entry_sp - 0x2e0 .. entry_sp + 0x0 */
#define stack0xfffffd28 (*(undefined4 *)(albw_frame + 0x8))
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  
  bVar2 = func_0058DA04(*DAT_00327154);
  piVar1 = DAT_00327158;
  if (bVar2) {
    if (*(char *)(param_1 + 0x475) == '\x01') {
      *(undefined1 *)(param_1 + 0x475) = 0;
      func_004CEA18(*(int *)(param_1 + 0x490),1,0);
      func_004CEA18(*(int *)(param_1 + 0x490),1,1);
      func_00588C14(param_1,1,0);
    }
    else {
      if (*(int *)(param_1 + 0x538) != 0) {
        func_00151148(*(int *)(param_1 + 0x538),1);
      }
      *(undefined1 *)(*(int *)(param_1 + 0x49c) + 0x44) = 1;
      func_004CF478(*(int *)(param_1 + 0x490),1);
    }
    return func_00324964(param_1);
  }
  if (((*(char *)(param_1 + 0x475) == '\0') &&
      (iVar3 = *DAT_00327158, *(char *)(iVar3 + 0x70) == '\x05')) &&
     (*(char *)(iVar3 + 0x2e2) <= *(char *)(iVar3 + 0x2e3))) {
    *(undefined1 *)(param_1 + 0x475) = 1;
    if (*(int *)(param_1 + 0x494) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x494) + 0x14);
      if (*(float *)(iVar3 + 8) != DAT_0032715c) {
        *(float *)(iVar3 + 8) = DAT_0032715c;
        *(undefined1 *)(iVar3 + 0x26) = 1;
      }
    }
    func_004CEA18(*(int *)(param_1 + 0x490),0,0);
    func_004CEA18(*(int *)(param_1 + 0x490),0,1);
    func_00588C14(param_1,1,1);
    func_003249B4(param_1);
    puVar4 = func_005238E4(*piVar1,(int)*(short *)(param_1 + 0x2c));
    if (puVar4 == (uint *)0x2e) {
      uVar5 = 4;
    }
    else {
      if (0x2e < (int)puVar4) {
        if (puVar4 == (uint *)0x3a) {
          uVar5 = 1;
        }
        else if (puVar4 == (uint *)0x3b) {
          uVar5 = 0;
        }
        else {
          if (puVar4 != (uint *)&DAT_0000003c) {
            return 0;
          }
          uVar5 = 2;
        }
        return func_001CD204((undefined4 *)&stack0xfffffd28,uVar5,2,-1);
      }
      if (puVar4 == (uint *)&DAT_00000005) {
        uVar5 = 2;
      }
      else if (puVar4 == (uint *)&DAT_00000006) {
        uVar5 = 0;
      }
      else {
        if (puVar4 == (uint *)&SupervisorCall) {
          func_002DFF7C((undefined4 *)&stack0xfffffd28);
          func_0019B04C(*DAT_0032716c);
          func_00581D60(*DAT_00327170);
          return func_004C43E0(*DAT_0032717c,(int *)&stack0xfffffd28);
        }
        if (puVar4 != (uint *)&DAT_0000002d) {
          return 0;
        }
        uVar5 = 5;
      }
    }
    func_001D6FD0((undefined4 *)(param_1 + 0x3d0),uVar5,3,DAT_00327160,-1);
  }
  return 0;
}

