#include "ghidra_types.h"

extern int func_00382E10(int param_1,int param_2);
extern int func_00383540(int param_1,int param_2);
extern int func_00386C40(int param_1,int param_2);
extern int func_00397C6C(int param_1,int param_2);
extern int func_003985BC(int param_1,int param_2);
extern int func_00398D70(int param_1,int param_2);
extern int func_00399520(int param_1,int param_2);
extern int func_0039A33C(int param_1,int param_2);
extern int func_003A270C(int param_1,int param_2);
extern int func_003A3BF0(int param_1,int param_2);
extern int func_003AB434(int param_1,int param_2);
extern int func_003AF63C(int param_1,int param_2);
extern int func_003B0504(int param_1,int param_2);
extern int func_003BB2C4(int param_1,int param_2);
extern int func_003BCD74(int param_1,int param_2);

// USA 003A3584 <- EU 003A3560 (Ghidra, non-matching)

undefined4 func_003A3584(int param_1)

{
  func_00386C40(param_1 + 0xc,0);
  func_0039A33C(param_1 + 0x1f0,0);
  func_00382E10(param_1 + 0x2cc,0);
  func_003AF63C(param_1 + 0x30c,0);
  func_003A270C(param_1 + 0x358,0);
  func_00398D70(param_1 + 0x394,0);
  func_003A3BF0(param_1 + 0x414,0);
  func_003BB2C4(param_1 + 0x3d4,0);
  func_003985BC(param_1 + 0x454,0);
  func_003AB434(param_1 + 0x554,0);
  func_00399520(param_1 + 0x5e8,0);
  func_00397C6C(param_1 + 0x598,0);
  func_00383540(param_1 + 0x870,0);
  switch(*(undefined1 *)param_1) {
  default:
    return 0;
  case 1:
  case 2:
    func_00386C40(param_1 + 0xc,1);
    return func_0039A33C(param_1 + 0x1f0,1);
  case 3:
    return func_00382E10(param_1 + 0x2cc,1);
  case 4:
    return func_003AF63C(param_1 + 0x30c,1);
  case 6:
    return func_003A270C(param_1 + 0x358,1);
  case 7:
    return func_00398D70(param_1 + 0x394,1);
  case 8:
    return func_003A3BF0(param_1 + 0x414,1);
  case 9:
    return func_003BB2C4(param_1 + 0x3d4,1);
  case 10:
    return func_003985BC(param_1 + 0x454,1);
  case 0xb:
    return func_003AB434(param_1 + 0x554,1);
  case 0xd:
    return func_00399520(param_1 + 0x5e8,1);
  case 0xe:
    return func_003B0504(param_1 + 0x6f8,1);
  case 0xf:
    return func_003BCD74(param_1 + 0x834,1);
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x1e:
  case 0x1f:
    return func_00397C6C(param_1 + 0x598,1);
  case 0x18:
  case 0x19:
    return func_00383540(param_1 + 0x870,1);
  }
}

