hello beji.
good night! makabaka.

## time schedule  
### MORNING  
    read
    write
    learn
    think
### AFTERNOON  
    watch  
    sleep  
### EVENING  
    watch  
    exercise  


The offset and PHY of the next advertising packet in this extended advertising event.
                                                        
下一个广播包的偏移和PHY在这个扩展的广播事件里


广播信息
BLE_GAP_EVT_ADV_REPORT 事件：当扫描到了广播信息触发该事件
nrf_ble_scan_on_ble_evt() 回调


GATT句柄  

主机扫描，主机发现服务，建立主从通信通道  

语境：特定的人在特定的时间，环境和交谈双方具有共同认知的语言环境下的交流

龙树，提波，大伽，婆罗门


ble_advdata_name_find()    // 寻找广播名
ble_advdata_parse()			// 
ble_advdata_search()





通过识别mac地址选择连接相同设备
命令下发服务（透传服务）


从广播中获取mac地址，通过mac地址进行过滤连接


多台心电设备，多个mac地址，怎么进行选择连接哪个？又或者说，如何判断哪个mac地址的是要连的？
心电设备保存了血氧和血氧的mac地址，中转器获取到mac后进行过滤连接，如何动态添加mac？






扫描事件派发

初始化扫描参数
设置为不自动连接
初始化扫描参数
扫描器的过滤模式设置
使能主机过滤器  


从广播数据中获取到mac地址，设备名字
然后通过mac地址，设备名字进行连接设备


自主学习
主动性
艰苦性
连续性
目标性

专心集中，一心不二用
重复练习，熟能生巧


PREP表达
表达观点(P),支持的依据(R),案例(E),重申观点(P)


阅读，写作，思考
善于思考，勤于思考
敢于质疑
发现问题，提出问题  

古埃及     古巴比伦      古印度     古中国  

进口国    


扫描方式：
    白名单
    软件过滤
        名字
        mac
        UUID
    过滤
        强度



nrf_ble_scan_on_connected_evt(p_scan_data, p_gap_evt);
	p_scan_data->evt_handler 被执行

case BLE_GAP_EVT_CONNECTED: 还会不会执行




添加服务需要修改什么？
~~what do you need to change when add service~~   
what needs to be changed to add a service.


**procedure：**
1. 创建lua_4G项目
    - 项目名（demolua)
2. 选择底层CORE
    - D:\project\demolua\LuatOS-Air_V4017_RDA8910_TTS_NOVOLTE_FLOAT.pac
3. 增加脚本或资源文件
    - lib(资源支持包)
    - main(脚本)
4. 下载底层和脚本（初次）
    - 底层未作修改可选*下载脚本*  

<font color="red">注：需先创建一个工程目录，然后将lib目录，将底层CORE复制到这里，然后创建脚本文件</font>  


Disabling a peripheral that has the same ID as the SPI will not reset any of the registers that are shared with
the SPI.  
失能一个与SPI相同ID的外设将不会重置与SPI共享的任何寄存器  



```
/* Global Data */
static xSemaphoreHandle xQueueMutex = NULL;
static xSemaphoreHandle xSemaTxDone = NULL;

/* 创建互斥信号量 用于资源共享 */
xQueueMutex = xSemaphoreCreateMutex();
configASSERT(xQueueMutex != NULL);

/* 给出互斥量 */
xSemaphoreGive(xQueueMutex);

/* 获取互斥量 */
xSemaphoreTake(xQueueMutex,    /* 互斥量句柄 */
				portMAX_DELAY);/* 阻塞等待 */
```



Alpha混合



emWin支持三种位图文件形式：.c文件位图；.dta格式流位图；.bmp格式位图  
位图转换器  
用于将PC格式的图片转换为C文件格式或C流位图格式的工具

内存设备  
窗口管理器  



JPEG(jay-pag)是一种标准的全色和灰度图像压缩方法，同时也是Joint Photographic Experts Group(联合图像专家)的缩写

GIF(Graphics Interchange Format)是由CompuServe公司在1980年代开发的一种图像文件格式   

PNG(Portable Network Graphics)格式，是一种光栅图形文件格式，支持无损数据压缩和透明度，支持基于调色板的图像，
灰度图像以及非调色板的全色RGB图像  


Timer  
5个  
TIMER) ~ TIMER2（4个CC寄存器） 
TIMER3 ~ TIMER4（6个CC寄存器）  
位宽(BITMODE Register) 
    16，8，24，32  
时钟源  
    工作在高频时钟下(HFLCK)下，同时包含一个4bit(1/2X)的分频(PRESCALER)，可以对高频时钟源进行分频  
两种时钟输入模式    
    1MHz模式(PCLK1M)和16MHz模式(PCLK16M)  
分频器   
    $$f_TIMER = {/frac{HFCLK}/{2^PRESCALER}}$$
工作模式(MODE Register)  
    定时器模式(timer)和计数器模式(counter)  
比较/捕获功能  
    定时模式下设定比较(compare)/捕获(capture)寄存器CC[n]的值，可以设置定时的时间。当定时的时间跟CC[n]寄存器的值相等时，将触发一个CPMPARE[n]EVENT。
    
    

0.000032 s 一次
0.001 s    x次



## word
1. involvement			n.参与，介入，暧昧关系   
2. orientation        n.目标，方向，方位，（基本的）态度  
3. routine        n.常规，俗套，无聊；（计算机）例行程序；adj.常规的；v.按惯例安排  
4. therefor        adv.因此，所以  
5. cursor        n.光标，（计）游标，指针  
6. widget        n.装饰物，小部件  
7. polygon        n.多边形，多角形物体  
8. triangle        n.三角形，三角  
9. ellipse        n.椭圆，椭圆形  
10. abundant        adj.丰富的，大量的


1415926535 8979323846 2643383279 5028841971 6939937510 5820974944 5923078164 0628620899 8628034825 3421170679

