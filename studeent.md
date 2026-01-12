````mermaid
graph TD
    A([Start]) --> B[/Input number of students 's'/]
    B --> C[/Input number of subjects 'm'/]
    C --> D[Initialize arrays: students, totals, grades, averages]
    
    D --> E[acceptStudent Function]
    E --> F{i < s?}
    F -- Yes --> G[/Input marks for each subject/]
    G --> H[i++]
    H --> F
    F -- No --> I[CalTotal Function]
    
    I --> J{i < s?}
    J -- Yes --> K[Sum all subject marks for student i]
    K --> L[Store in totals array]
    L --> M[i++]
    M --> J
    J -- No --> N[CalAverage Function]
    
    N --> O{i < s?}
    O -- Yes --> P[Calculate average = total / subjects]
    P --> Q[i++]
    Q --> O
    O -- No --> R[findGrade Function]
    
    R --> S{i < s?}
    S -- Yes --> T{avg >= 80?}
    T -- Yes --> U[Grade = A]
    T -- No --> V{avg >= 65?}
    V -- Yes --> W[Grade = B]
    V -- No --> X{avg >= 50?}
    X -- Yes --> Y[Grade = C]
    X -- No --> Z[Grade = D]
    U --> AA[i++]
    W --> AA
    Y --> AA
    Z --> AA
    AA --> S
    S -- No --> BB[Print Function]
    
    BB --> CC[Display all students marks, totals, and grades]
    CC --> DD([End])
    .....