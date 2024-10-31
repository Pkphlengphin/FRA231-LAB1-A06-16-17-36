function chunkStd = calculateError(data, chunkSize)
    % ขนาดของข้อมูล
    numElements = length(data);
    
    % จำนวน chunk ที่สามารถสร้างได้
    numChunks = floor(numElements / chunkSize);
    
    % สร้าง array สำหรับเก็บค่าความแปรปรวนของแต่ละ chunk
    chunkStd = zeros(1, numChunks);
    
    % คำนวณความแปรปรวนสำหรับแต่ละ chunk
    for i = 1:numChunks
        startIdx = (i-1) * chunkSize + 1; % จุดเริ่มต้นของ chunk
        endIdx = i * chunkSize;           % จุดสิ้นสุดของ chunk
        chunkStd(i) = std(data(startIdx:endIdx));  % คำนวณความแปรปรวน
    end
end
