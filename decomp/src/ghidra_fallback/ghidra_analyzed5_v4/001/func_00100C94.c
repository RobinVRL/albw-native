#include "ghidra_types.h"

extern int func_00100F68(void);
extern int func_00101300(void);
extern int func_0010140C(void);
extern int func_00101434(void);
extern int func_0010144C(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_0010149C(void);
extern int func_001014EC(void);
extern int func_0010173C(int param_1);
extern int func_00101774(void *param_1,undefined4 param_2);
extern int func_00101788(void *param_1,undefined4 param_2);
extern int func_001017AC(undefined4 param_1,int param_2,undefined4 param_3);
extern int func_00101A70(byte param_1);
extern int func_00101B1C(int param_1);
extern int func_00101BC8(int param_1);
extern int func_00101BE8(void);
extern int func_001024E0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_00102E08(undefined4 param_1);
extern int func_00104A80(void);
extern int func_0010585C(void);
extern int func_00108010(void);
extern undefined4 DAT_00100d74;
extern undefined4 DAT_00100d78;
extern undefined4 *DAT_00100d7c;
extern int *DAT_00100d80;

// USA 00100C94 <- EU 00100C94 (Ghidra, non-matching)
// GLOBAL DAT_00100d74 undefined4
// GLOBAL DAT_00100d78 undefined4
// GLOBAL DAT_00100d7c undefined4 *
// GLOBAL DAT_00100d80 int *

undefined4 func_00100C94(void)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 in_r2;
  
  func_0010140C();
  func_00108010();
  func_00101300();
  func_00101434();
  func_00102E08(0x14);
  func_0010149C();
  func_00101788(DAT_00100d74,0);
  func_00101774(DAT_00100d78,0);
  func_00101B1C(1);
  func_0010173C(1);
  cVar2 = func_0010585C();
  puVar1 = DAT_00100d7c;
  if ((cVar2 != '\0') || (iVar3 = func_00104A80(), iVar3 != 0)) {
    func_00101A70(0);
    in_r2 = *puVar1;
    func_001017AC(0,0,in_r2);
  }
  func_00100F68();
  func_00101BC8(*DAT_00100d80);
  func_00101BE8();
  iVar3 = func_001014EC();
  uVar4 = func_0010144C(iVar3,extraout_r1,in_r2);
  func_001024E0(uVar4,extraout_r1_00,in_r2);
  func_00101A70(0);
  return func_001017AC(0,0,*puVar1);
}

