#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00178AE8(int param_1,uint *param_2,uint *param_3,uint param_4);
extern int func_00179104(int param_1,uint *param_2,uint *param_3);
extern int func_00179190(int param_1,uint *param_2,int param_3,int param_4);
extern int func_001794DC(int param_1,uint *param_2,int param_3,uint param_4,int param_5);
extern int func_00584084(int param_1,int param_2);
extern int func_00584438(int param_1);
extern int func_005844EC(int param_1);
extern int func_005847C0(int param_1);
extern int func_005847DC(int param_1);
extern int func_005847EC(int param_1);
extern uint *DAT_00179f28;
extern uint DAT_00179f2c;
extern uint *DAT_00179f30;
extern uint *DAT_00179f34;
extern undefined4 DAT_00179f38;
extern undefined4 DAT_00179f3c;
extern undefined2 DAT_00179f40;
extern uint DAT_00179f4c;
extern int *DAT_00179f50;
extern int *DAT_00179f54;
extern int *DAT_00179f58;
extern undefined2 DAT_00179f5c;
extern undefined2 DAT_0017a17c;

// USA 00179BC4 <- EU 00179BC4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_00179f28 uint *
// GLOBAL DAT_00179f2c uint
// GLOBAL DAT_00179f30 uint *
// GLOBAL DAT_00179f34 uint *
// GLOBAL DAT_00179f38 undefined4
// GLOBAL DAT_00179f3c undefined4
// GLOBAL DAT_00179f40 undefined2
// GLOBAL DAT_00179f4c uint
// GLOBAL DAT_00179f50 int *
// GLOBAL DAT_00179f54 int *
// GLOBAL DAT_00179f58 int *
// GLOBAL DAT_00179f5c undefined2
// GLOBAL DAT_0017a17c undefined2

/* WARNING: Variable defined which should be unmapped: objStack_50 */

uint * func_00179BC4(int param_1,uint *param_2,uint *param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_50 ((uint *)(albw_frame + 0x0))
  #define local_4c (*(uint * *)(albw_frame + 0x4))
  #define local_44 ((uint *)(albw_frame + 0xc))
  #define local_30 (*(undefined2 *)(albw_frame + 0x20))
  #define local_28 (*(uint *)(albw_frame + 0x28))
  #define local_24 (*(uint * *)(albw_frame + 0x2c))
  uVar6 = DAT_00179f2c;
  if (((*DAT_00179f28 & 1) == 0) &&
     (iVar3 = func_00100174((int *)DAT_00179f28), puVar4 = DAT_00179f30, iVar3 != 0)) {
    DAT_00179f30[1] = *DAT_00179f34;
    *puVar4 = uVar6;
  }
  puVar4 = DAT_00179f30;
  switch(param_4) {
  case 0:
    local_30 = 0;
    objStack_50[0] = DAT_00179f4c;
    (*(undefined2 *)((char *)&local_44[0] + 0)) = 0;
    local_24 = (uint *)&DAT_00179f40;
    local_28 = uVar6;
    (**(code **)(uVar6 + 8))(&local_28);
    iVar3 = 0;
    do {
      if (*(short *)((int)local_24 + iVar3 * 2) == 0) {
        if (iVar3 < 0x40001) goto LAB_00179ce0;
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40001);
    iVar3 = 0;
LAB_00179ce0:
    if (10 < iVar3) {
      iVar3 = 10;
    }
    (**(code **)(local_28 + 8))(&local_28);
    func_0010E3C4(local_44,local_24,iVar3 << 1);
    *(undefined2 *)((int)local_44 + iVar3 * 2) = 0;
    func_00584084(*DAT_00179f50,(int)objStack_50);
    (**(code **)(objStack_50[0] + 8))(objStack_50);
    (**(code **)(objStack_50[0] + 8))(objStack_50);
    iVar3 = 0;
    do {
      if (*(short *)((int)local_44 + iVar3 * 2) == 0) {
        if (iVar3 < 0x40001) goto LAB_00179d80;
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40001);
    iVar3 = 0;
LAB_00179d80:
    param_3 = func_00178AE8(param_1,param_3,local_44,iVar3 << 1);
    break;
  case 1:
    local_4c = (uint *)(*DAT_00179f54 + 0x1098);
    if (*(char *)(*DAT_00179f54 + 0x10ae) == '\0') {
      objStack_50[0] = uVar6;
      (**(code **)(uVar6 + 8))(objStack_50);
      (**(code **)(objStack_50[0] + 8))(objStack_50);
      iVar3 = 0;
      do {
        if (*(short *)((int)local_4c + iVar3 * 2) == 0) goto joined_r0x0017a020;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x40001);
      goto LAB_0017a024;
    }
    (**(code **)(*DAT_00179f30 + 8))(DAT_00179f30);
    local_4c = (uint *)puVar4[1];
    (**(code **)(*puVar4 + 8))(puVar4);
    iVar3 = 0;
    do {
      if (*(short *)(puVar4[1] + iVar3 * 2) == 0) {
        if (iVar3 < 0x40001) goto LAB_00179e20;
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40001);
    iVar3 = 0;
LAB_00179e20:
    uVar6 = iVar3 << 1;
    goto LAB_0017a02c;
  case 2:
    if (*DAT_00179f58 != 0) {
      local_4c = (uint *)func_005847EC(*DAT_00179f58);
      objStack_50[0] = uVar6;
      if ((short)*local_4c == 0) {
        local_4c = (uint *)&DAT_00179f5c;
      }
      (**(code **)(uVar6 + 8))(objStack_50);
      (**(code **)(objStack_50[0] + 8))(objStack_50);
      iVar3 = 0;
      do {
        if (*(short *)((int)local_4c + iVar3 * 2) == 0) {
          if (iVar3 < 0x40001) goto LAB_00179f80;
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x40001);
      iVar3 = 0;
LAB_00179f80:
      param_3 = func_00178AE8(param_1,param_3,local_4c,iVar3 << 1);
    }
    break;
  case 3:
    if (*DAT_00179f58 == 0) {
      return param_3;
    }
    local_4c = (uint *)func_005847C0(*DAT_00179f58);
    objStack_50[0] = uVar6;
    if ((short)*local_4c == 0) {
      local_4c = (uint *)&DAT_0017a17c;
    }
    (**(code **)(uVar6 + 8))(objStack_50);
    (**(code **)(objStack_50[0] + 8))(objStack_50);
    iVar3 = 0;
    do {
      if (*(short *)((int)local_4c + iVar3 * 2) == 0) goto joined_r0x0017a020;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40001);
LAB_0017a024:
    iVar3 = 0;
    goto LAB_00179e94;
  case 4:
    uVar6 = *(uint *)(param_1 + 0x70);
    if ((int)uVar6 < 1) {
      return param_3;
    }
    local_4c = *(uint **)(param_1 + 0x68);
LAB_0017a02c:
    param_3 = func_00178AE8(param_1,param_3,local_4c,uVar6);
    break;
  case 5:
    bVar1 = *(byte *)(param_5 + 8);
    uVar6 = (uint)*(byte *)(param_5 + 9);
    bVar2 = *(byte *)(param_5 + 0xc);
    uVar7 = (uint)(short)((ushort)*(byte *)(param_5 + 10) + (ushort)*(byte *)(param_5 + 0xb) * 0x100
                         );
    puVar4 = func_00179104(param_1,param_2,param_3);
    objStack_50[0] = uVar6;
    param_3 = (uint *)func_001794DC(param_1,puVar4,(uint)bVar1,uVar7,uVar6);
    if ((int)uVar7 < 0) {
      param_3 = func_00179190(param_1,param_3,(uint)bVar2,uVar6);
    }
    break;
  case 9:
    if (*DAT_00179f58 != 0) {
      iVar3 = func_00584438(*DAT_00179f58);
      objStack_50[0] = 0;
      param_3 = (uint *)func_001794DC(param_1,param_3,0,(int)(short)iVar3,0);
    }
    break;
  case 10:
    if (*DAT_00179f58 != 0) {
      iVar3 = func_005847DC(*DAT_00179f58);
      objStack_50[0] = 0;
      param_3 = (uint *)func_001794DC(param_1,param_3,0,(int)(short)iVar3,0);
    }
    break;
  case 0xb:
    if (*DAT_00179f58 != 0) {
      uVar5 = func_005844EC(*DAT_00179f58);
      objStack_50[0] = 0;
      param_3 = (uint *)func_001794DC(param_1,param_3,0,(int)(short)uVar5,0);
    }
  }
  return param_3;
joined_r0x0017a020:
  if (0x40000 < iVar3) goto LAB_0017a024;
LAB_00179e94:
  uVar6 = iVar3 << 1;
  goto LAB_0017a02c;
}

