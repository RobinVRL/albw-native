#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002275F4(int param_1);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_00584C14(int param_1,int *param_2);
extern undefined4 DAT_00227864;
extern undefined DAT_00227868;
extern int DAT_0022786c;

// USA 002276F4 <- EU 002276F4 (Ghidra, non-matching)
// GLOBAL DAT_00227864 undefined4
// GLOBAL DAT_00227868 undefined
// GLOBAL DAT_0022786c int

undefined4 func_002276F4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint *puVar5;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define aiStack_78 ((int *)(albw_frame + 0x8))
  #define local_18 (*(int *)(albw_frame + 0x68))
  #define local_14 (*(undefined * *)(albw_frame + 0x6c))
  *(undefined1 *)(param_1 + 0x751) = 1;
  uVar2 = DAT_00227864;
  *(undefined4 *)(*(int *)(param_1 + 0x598) + 0x60) = DAT_00227864;
  *(undefined4 *)(*(int *)(param_1 + 0x598) + 0x58) = uVar2;
  cVar1 = *(char *)(param_1 + 0x73c);
  if (cVar1 == '\x04') {
    puVar5 = (uint *)func_002C11E8(aiStack_78,6,10,0);
    func_0016898C(*(int *)(param_1 + 0x68c),puVar5);
    uVar3 = 3;
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 == '\x02') {
        puVar5 = (uint *)func_002C11E8(aiStack_78,8,10,0);
        func_0016898C(*(int *)(param_1 + 0x68c),puVar5);
        *(undefined1 *)(param_1 + 0x73c) = 1;
      }
      else {
        local_14 = &DAT_00227868;
        local_18 = DAT_0022786c;
        uVar4 = func_00584C14(*(int *)(param_1 + 0x594),&local_18);
        func_004CEA18(*(int *)(param_1 + 0x594),1,uVar4);
        puVar5 = (uint *)func_002C11E8(aiStack_78,9,10,0);
        func_0016898C(*(int *)(param_1 + 0x68c),puVar5);
        *(undefined1 *)(param_1 + 0x73c) = 0;
        puVar5 = (uint *)func_002C11E8(aiStack_78,0,0,0);
        func_0016898C(*(int *)(param_1 + 0x690),puVar5);
        *(undefined1 *)(param_1 + 0x74c) = 0;
        *(undefined1 *)(param_1 + 0x74d) = 1;
      }
      goto LAB_002277c4;
    }
    puVar5 = (uint *)func_002C11E8(aiStack_78,7,10,0);
    func_0016898C(*(int *)(param_1 + 0x68c),puVar5);
    uVar3 = 2;
  }
  *(undefined1 *)(param_1 + 0x73c) = uVar3;
LAB_002277c4:
  return func_002275F4(param_1);
}

