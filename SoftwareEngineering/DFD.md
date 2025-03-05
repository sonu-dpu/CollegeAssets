### **Understanding DFD Levels (Data Flow Diagram Levels)**  

A **Data Flow Diagram (DFD)** visually represents how data moves within a system. It consists of **processes, external entities, data stores, and data flows**. DFDs have different levels to show increasing details of the system.

---

### **DFD Levels:**
1. **Level 0 (Context Diagram)** – High-level view of the entire system.
2. **Level 1 (Top-Level DFD)** – Breakdown of major processes in the system.
3. **Level 2 (Detailed DFD)** – Further decomposition of individual processes.

---

### **1. Level 0 DFD (Context Diagram)**
- Represents the entire **AI Study Buddy system** as a single process.
- Shows interactions with **external entities** (Students, Educators, AI Model, Database).
- No internal details of the system.

---

### **2. Level 1 DFD (Top-Level DFD)**
- Breaks the system into **major processes** (e.g., User Authentication, AI-Powered Assistance, Study Plan Customization).
- Shows how data flows between **processes and data stores**.
- Still does not go into deep internal details.

---

### **3. Level 2 DFD (Detailed DFD)**
- Further decomposes each major process from Level 1.
- Shows sub-processes and their data exchanges in detail.
- Provides a more **technical** view of how the system functions.

---

Now, I’ll create the **Mermaid diagrams** for all three levels. Stay tuned! 🚀

### **Level 0 DFD (Context Diagram)**
```mermaid
graph TD;
    Student["Student"] -->|Sends Queries / Requests| AIStudyBuddy["AI Study Buddy System"];
    Educator["Educator"] -->|Tracks Student Progress| AIStudyBuddy;

    AIStudyBuddy -->|Fetches Data| Database["Appwrite Database"];
    AIStudyBuddy -->|Processes AI Queries| AIModel["AI Model (Hugging Face/OpenAI)"];

    AIModel -->|Provides AI Responses| AIStudyBuddy;
    Database -->|Returns Stored Data| AIStudyBuddy;
    AIStudyBuddy -->|Delivers Responses / Study Plans| Student;

```
---
### **Level 1 DFD (Top-Level DFD)**
```mermaid
graph TD;
    Student["Student"] -->|Login/Signup| AuthProcess["User Authentication"];
    AuthProcess -->|Stores User Data| UserDB["D1: User Database"];

    Student -->|Asks Doubts / Requests Summary| AIProcess["AI-Powered Learning"];
    AIProcess -->|Fetches Study Materials| StudyDB["D2: Study Materials"];
    AIProcess -->|Processes Queries| AIModel["AI Model"];
    AIModel -->|Generates Responses| AIProcess;
    AIProcess -->|Provides Answers| Student;

    Student -->|Creates Study Plan| StudyPlan["Study Plan Customization"];
    StudyPlan -->|Stores Data| PlanDB["D3: Study Plans"];

    Student -->|Takes Quiz| Assessments["Assessments & Progress"];
    Assessments -->|Stores Scores| QuizDB["D4: Quiz Results"];
    Educator["Educator"] -->|Monitors Student Progress| Assessments;

    Student -->|Uses Voice Features| SpeechModule["Speech-to-Text & Text-to-Speech"];
    SpeechModule -->|Processes Audio/Text| AIModel;
```
---
### **Level 2 DFD (Detailed DFD - Breakdown of AI-Powered Learning Assistance)**
```mermaid
graph TD;
    subgraph AI Query Handling
        Student -->|Asks a Doubt| QueryHandler["Query Processing"];
        QueryHandler -->|Fetches Study Content| StudyDB["D2: Study Materials"];
        QueryHandler -->|Sends Query to AI| AIModel["AI Model"];
    end

    subgraph AI Response Generation
        AIModel -->|Processes Question| NLP["Natural Language Processing"];
        NLP -->|Generates Response| AIResponse["AI Response Generation"];
        AIResponse -->|Sends AI Answer| QueryHandler;
        QueryHandler -->|Delivers Answer| Student;
    end

    subgraph Study Summarization
        Student -->|Requests Summary| Summarizer["Study Material Summarization"];
        Summarizer -->|Fetches Content| StudyDB;
        Summarizer -->|Processes Content| AIModel;
        AIModel -->|Generates Summary| Summarizer;
        Summarizer -->|Delivers Summary| Student;
    end
```

---
# Get it converred to svg, png format
- Copy the code using copy button
- paste the code in [https://mermaidchart.com/](https://www.mermaidchart.com/)
- Export the code to svg, png by navigating to the actions section
