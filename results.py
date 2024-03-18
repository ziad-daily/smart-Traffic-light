from ultralytics import YOLO



model = YOLO("best.onnx")

metrics = model.val()







