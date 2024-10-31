function avg_values = calculateChunkAverages(A, chunkSize)
    % ตรวจสอบขนาดของ array
    if isempty(A)
        avg_values = []; % ถ้า array ว่าง ให้คืนค่าเป็น array ว่าง
        return;
    end
    
    % คำนวณจำนวนกลุ่มที่สามารถแบ่งได้
    numGroups = floor(length(A) / chunkSize);
    
    % สร้าง array สำหรับเก็บค่าเฉลี่ยของแต่ละกลุ่ม
    avg_values = zeros(1, numGroups);
    
    % Loop เพื่อหาค่าเฉลี่ยในแต่ละกลุ่ม
    for i = 1:numGroups
        % ดึงข้อมูลของแต่ละกลุ่ม
        groupData = A((i-1)*chunkSize + 1 : i*chunkSize);
        
        % หาค่าเฉลี่ยของกลุ่มนั้น
        avg_values(i) = mean(groupData);
    end
end