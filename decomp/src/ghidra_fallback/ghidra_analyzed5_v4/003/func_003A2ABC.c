#include "ghidra_types.h"

extern int func_00382A00(int param_1);
extern int func_003831E4(int param_1);
extern int func_00384CA0(int param_1);
extern int func_00397160(int param_1);
extern int func_00398164(int param_1);
extern int func_00398A48(int param_1);
extern int func_0039917C(int param_1);
extern int func_00399A44(int param_1);
extern int func_003A2460(int param_1);
extern int func_003A2FD4(byte *param_1,uint param_2);
extern int func_003A38C8(int param_1);
extern int func_003AB160(int param_1);
extern int func_003AF248(int param_1);
extern int func_003AFA60(int param_1);
extern int func_003AFDB4(int param_1);
extern int func_003BAE58(int param_1);
extern int func_003BCBA4(int param_1);
extern int func_003BCCEC(int param_1);

// USA 003A2ABC <- EU 003A2A98 (Ghidra, non-matching)

undefined4 func_003A2ABC(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  
  func_00384CA0((int)(param_1 + 0xc));
  func_00399A44((int)(param_1 + 0x1f0));
  func_00382A00((int)(param_1 + 0x2cc));
  func_003AF248((int)(param_1 + 0x30c));
  func_003A2460((int)(param_1 + 0x358));
  func_00398A48((int)(param_1 + 0x394));
  func_003A38C8((int)(param_1 + 0x414));
  func_003BAE58((int)(param_1 + 0x3d4));
  func_00398164((int)(param_1 + 0x454));
  func_003AB160((int)(param_1 + 0x554));
  func_00397160((int)(param_1 + 0x598));
  func_0039917C((int)(param_1 + 0x5e8));
  pbVar1 = param_1 + 0x6f8;
  func_003AFA60((int)pbVar1);
  pbVar2 = param_1 + 0x834;
  func_003BCBA4((int)pbVar2);
  func_003831E4((int)(param_1 + 0x870));
  func_003A2FD4(param_1,1);
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0xc))(*(int **)(param_1 + 4));
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8));
  }
  if (*(byte **)(param_1 + 4) != pbVar1) {
    func_003AFDB4((int)pbVar1);
  }
  if (*(byte **)(param_1 + 4) != pbVar2) {
    return func_003BCCEC((int)pbVar2);
  }
  return 0;
}

