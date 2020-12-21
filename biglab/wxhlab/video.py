# -*- coding: utf-8 -*-
# This Python file uses the following encoding: utf-8

# if__name__ == "__main__":
#     pass
import numpy as np
import cv2 as cv
from PIL import Image
import random
def greatFunc():
        print("hello wxh")

        cap = cv.VideoCapture('C:\\Users\\Administrator\\Desktop\\2.mp4')
        fourcc = cv.VideoWriter_fourcc(*'mp4v')#指定fourcc编码
        out = cv.VideoWriter('C:\\Users\\Administrator\\Desktop\\1.mp4',fourcc,20.0,(640,480),0)
        '''
        用于灰度图
        这里，out是一个VideoWriter实例化对象，第一个参数是要制作的视频的文件名，fourcc后面会详解，20是fps，
        接下来是视频的长宽，如果要保存只有两维的灰度图，则最后还要加个False或者0，不添加默认是彩色。
        '''
        while cap.isOpened():

            ret, frame = cap.read()
            '''
            cap.read()是按帧读取，返回两个值：ret,frame
            ret是布尔值，如果读取帧是正确的则返回True，如果文件读取到结尾，它的返回值就为False；
            后面的frame该帧图像的三维矩阵BGR形式。
            '''
            if not ret:
                print('Can’t recive frame(stream end?). Exiting ...')
                break

            gray = cv.cvtColor(frame,cv.COLOR_BGR2GRAY)#将捕获的一帧图像灰度化处理
            frame = cv.flip(gray, 1)#图像翻转（0：垂直翻转；1：水平翻转；-1：垂直水平翻转）
            cv.imshow('frame', frame)#显示图像帧（将每一帧图像连续显示便是一段视频）
            out.write(frame)#保存
            if cv.waitKey(1) == ord('q'):#等待键盘响应，按下‘q’保存并退出
                break
        #工作完成后，释放所有内容
        cap.release()
        out.release()
        cv.destroyAllWindows()


def greatTo():
    cap = cv.VideoCapture(0,cv.CAP_DSHOW) #通过本地摄像头捕获视频
    # cap = cv.VideoCapture('C:\\Users\\Administrator\\Desktop\\2.mp4')
    fourcc = cv.VideoWriter_fourcc(*'mp4v')#指定fourcc编码
    out = cv.VideoWriter('C:\\Users\\Administrator\\Desktop\\1.mp4',fourcc,20.0,(640,480),0)
    '''
    用于灰度图
    这里，out是一个VideoWriter实例化对象，第一个参数是要制作的视频的文件名，fourcc后面会详解，20是fps，
    接下来是视频的长宽，如果要保存只有两维的灰度图，则最后还要加个False或者0，不添加默认是彩色。
    '''
    while cap.isOpened():

        ret, frame = cap.read()
        '''
        cap.read()是按帧读取，返回两个值：ret,frame
        ret是布尔值，如果读取帧是正确的则返回True，如果文件读取到结尾，它的返回值就为False；
        后面的frame该帧图像的三维矩阵BGR形式。
        '''
        if not ret:
            print('Can’t recive frame(stream end?). Exiting ...')
            break

        gray = cv.cvtColor(frame,cv.COLOR_BGR2GRAY)#将捕获的一帧图像灰度化处理
        frame = cv.flip(gray, 1)#图像翻转（0：垂直翻转；1：水平翻转；-1：垂直水平翻转）
        cv.imshow('frame', frame)#显示图像帧（将每一帧图像连续显示便是一段视频）
        out.write(frame)#保存
        if cv.waitKey(1) == ord('q'):#等待键盘响应，按下‘q’保存并退出
            break
    #工作完成后，释放所有内容
    cap.release()
    out.release()
    cv.destroyAllWindows()


def smooth():
    print("hello wxh")

    cap = cv.VideoCapture('C:\\Users\\Administrator\\Desktop\\2.mp4')
    fourcc = cv.VideoWriter_fourcc(*'mp4v')#指定fourcc编码
    out = cv.VideoWriter('C:\\Users\\Administrator\\Desktop\\1.mp4',fourcc,20.0,(640,480),0)

    while cap.isOpened():

        ret, frame_smooth = cap.read()

        if not ret:
            print('Can’t recive frame(stream end?). Exiting ...')
            break

        frame_smooth = cv.GaussianBlur(frame_smooth, (3, 3), 0)
        cv.imshow('smooth', frame_smooth)#显示图像帧（将每一帧图像连续显示便是一段视频）
        out.write(frame_smooth)#保存
        if cv.waitKey(1) == ord('q'):#等待键盘响应，按下‘q’保存并退出
            break
    #工作完成后，释放所有内容
    cap.release()
    out.release()
    cv.destroyAllWindows()

def getRandArr():
    return np.full((1, 3), random.randint(0, 255))

def mosaic():
    cap = cv.VideoCapture('C:\\Users\\Administrator\\Desktop\\2.mp4')
    fourcc = cv.VideoWriter_fourcc(*'mp4v')#指定fourcc编码
    out = cv.VideoWriter('C:\\Users\\Administrator\\Desktop\\1.mp4',fourcc,20.0,(640,480),0)


    while cap.isOpened():

        ret, frame_Mosaic = cap.read()
        if not ret:
            print('Can’t recive frame(stream end?). Exiting ...')
            break


        start = (400, 700)
        end = (240, 440)
        for i in range(start[0], start[1], 20):
            for j in range(end[0], end[1], 20):
                frame_Mosaic[i:i + 20, j:j + 20] = getRandArr()
        cv.imshow('Mosaic', frame_Mosaic)#显示图像帧（将每一帧图像连续显示便是一段视频）
        out.write(frame_Mosaic)#保存

        if cv.waitKey(1) == ord('q'):#等待键盘响应，按下‘q’保存并退出
             break


    cap.release()
    out.release()
    cv.destroyAllWindows()


def binari():
    cap = cv.VideoCapture('C:\\Users\\Administrator\\Desktop\\2.mp4')
    fourcc = cv.VideoWriter_fourcc(*'mp4v')#指定fourcc编码
    out = cv.VideoWriter('C:\\Users\\Administrator\\Desktop\\1.mp4',fourcc,20.0,(640,480),0)

    while cap.isOpened():

        ret, frame_Binarization = cap.read()
        '''
        cap.read()是按帧读取，返回两个值：ret,frame
        ret是布尔值，如果读取帧是正确的则返回True，如果文件读取到结尾，它的返回值就为False；
        后面的frame该帧图像的三维矩阵BGR形式。
        '''
        if not ret:
            print('Can’t recive frame(stream end?). Exiting ...')
            break

        frame_Binarization = cv.cvtColor(frame_Binarization, cv.COLOR_BGR2GRAY)
        ret, frame_Binarization = cv.threshold(frame_Binarization, 128, 255, cv.THRESH_BINARY|cv.THRESH_OTSU)

        cv.imshow('Binarization', frame_Binarization)#显示图像帧（将每一帧图像连续显示便是一段视频）
        out.write(frame_Binarization)#保存

        if cv.waitKey(1) == ord('q'):#等待键盘响应，按下‘q’保存并退出
            break

    #工作完成后，释放所有内容
    cap.release()
    out.release()
    cv.destroyAllWindows()


def edge():
    cap = cv.VideoCapture('C:\\Users\\Administrator\\Desktop\\2.mp4')
    fourcc = cv.VideoWriter_fourcc(*'mp4v')#指定fourcc编码
    out = cv.VideoWriter('C:\\Users\\Administrator\\Desktop\\1.mp4',fourcc,20.0,(640,480),0)
    '''
    用于灰度图
    这里，out是一个VideoWriter实例化对象，第一个参数是要制作的视频的文件名，fourcc后面会详解，20是fps，
    接下来是视频的长宽，如果要保存只有两维的灰度图，则最后还要加个False或者0，不添加默认是彩色。
    '''
    while cap.isOpened():

        ret, frame_edgeDetection = cap.read()
        '''
        cap.read()是按帧读取，返回两个值：ret,frame
        ret是布尔值，如果读取帧是正确的则返回True，如果文件读取到结尾，它的返回值就为False；
        后面的frame该帧图像的三维矩阵BGR形式。
        '''
        if not ret:
            print('Can’t recive frame(stream end?). Exiting ...')
            break

        frame_edgeDetection = cv.Canny(frame_edgeDetection, 200, 300)#将捕获的一帧图像灰度化处理
        cv.imshow('edgeDetection', frame_edgeDetection)#显示图像帧（将每一帧图像连续显示便是一段视频）
        out.write(frame_edgeDetection)#保存

        if cv.waitKey(1) == ord('q'):#等待键盘响应，按下‘q’保存并退出
            break

    #工作完成后，释放所有内容
    cap.release()
    out.release()
    cv.destroyAllWindows()
